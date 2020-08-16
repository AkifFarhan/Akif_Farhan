#include<bits/stdc++.h>
using namespace std;

#define N 32000
bool flag[N];
vector<int>primes;

void sieve()
{
    int i,j;

    flag[0] = flag[1] = 1;

    for(i=4;i<N;i+=2)
        flag[i]=1;

    for(i=3;i*i<N;i+=2)
    {
        if(!flag[i])
        {
            for(j=i*i ;j<N; j+=2*i)
                flag[j]=1;
        }
    }

    for(i = 2;i<N;i++)
    {
        if(!flag[i])
            primes.push_back(i);
    }

}


int NOD(int n)
{
    int i,c,ret=1;
    for(i = 0;primes[i]*primes[i] <= n; i++)
    {
        for(c = 0; n % primes[i] == 0; c++)
            n /= primes[i];
        ret *= (c+1);
    }
    if(n > 1)
        ret = ret << 1;
    return ret;
}


int main()
{
    sieve();
    int a,b,n,ans=0;
    cin>>a>>b>>n;
    for(;a<=b;a++)
    {
        if(NOD(a)==n)
        ans++;
    }
    cout<<ans<<endl;
}
