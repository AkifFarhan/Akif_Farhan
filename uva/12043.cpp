#include<bits/stdc++.h>
using namespace std;

#define N 400

bool flag[N];
vector<long long> primes;

void sieve()
{
    long long i, j;

    for(i = 4; i < N; i += 2)
        flag[i] = 1;

    for(i = 3; i * i < N; i+=2)
    {
        if(flag[i] == 0)
        {
            for(j = i*i; j < N; j += 2*i)
                flag[j] = 1;
        }
    }

    for(i = 2; i < N; i++)
    {
        if(flag[i]==0)
            primes.push_back(i);
    }
}

long long SOD(long long n)
{
    long long i, c, ret = 1;

    for(i=0;primes[i]*primes[i]<=n;i++)
    {
        long long p = 1;
        for(c=0;n%primes[i]==0;c++)
        {
            n /= primes[i];
            p = p * primes[i];
        }
        ret*=(p * primes[i] - 1) / (primes[i] - 1);
    }

    if(n > 1)
        ret *= n+1;
    return ret;
}


long long NOD(long long n)
{
    long long i,c,ret=1;
    for(i = 0;primes[i]*primes[i] <= n; i++)
    {
        for(c =0;n%primes[i] == 0; c++)
            n /= primes[i];
        ret *=(c+1);
    }
    if(n > 1)
        ret = ret<<1;
    return ret;
}

int main()
{
//    freopen("out.txt", "w", stdout);
    sieve();

    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;

        a = ((a + c - 1 )/ c)*c;

        long long sod=0,nod=0;

        for(;a<=b;a+=c)
        {
            nod+=NOD(a);
            sod+=SOD(a);
        }

        cout<<nod<<" "<<sod<<endl;
    }
}
