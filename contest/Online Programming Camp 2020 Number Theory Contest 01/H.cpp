#include<bits/stdc++.h>
using namespace std;

#define N 800
#define ll long long

bool flag[N];
vector<int>primes;

void sieve()
{
    ll i ,j ;
    flag[0]=flag[1]=1;
    for(i = 4 ; i<N ; i+=2)
        flag[i]=1;

    for(i=3 ; i*i<N ; i+=2)
    {
        if(flag[i] == 0)
        {
            for(j=i*i ; j<N ;j+=2*i)
                flag[j]=1;
        }
    }

    for(i=2;i<N;i++)
    {
        if(flag[i]==0)
            primes.push_back(i);
    }
}

ll SOD(ll n)
{
    ll i, c, res = 1;

    for(i = 0; primes[i]*primes[i] <= n; i++)
    {
        int p = 1;
        for(c = 0; n % primes[i] == 0; c++)
        {
            n /= primes[i];
            p = p * primes[i];
        }
        res*=(p*primes[i]-1)/(primes[i]-1);
    }
    if(n > 1)
        res *= (n*n-1)/(n-1);
    return res;
}

int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n = SOD(n) - n;

        cout<<n<<endl;
    }
}
