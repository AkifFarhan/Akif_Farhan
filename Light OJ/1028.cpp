#include<bits/stdc++.h>
using namespace std;

#define N 1000009

bool flag[N];
vector<long long>primes;

void sieve()
{
    long long i,j;

    for(i=4;i<N;i+=2)
        flag[i]=1;

    for(i=3; i*i<N ; i+=2)
    {
        if(flag[i]==0)
        {
            for( j=i*i ; j<N ;j+=2*i )
            {
                flag[j]=1;
            }
        }
    }

    //primes.push_back(2);
    for(i=2;i<N;i++)
    {
        if(flag[i]==0)
            primes.push_back(i);
    }
}
long long NOD(long long n)
{
    long long i,j,res=1;
    for(i=0;primes[i]*primes[i]<=n;i++)
    {
        for(j=0 ; n%primes[i]==0 ;j++)
            n/=primes[i];
        res *= (j+1);
    }
    if(n>1)
        res = res<<1;
    return res;
}

int main()
{
    sieve();
    long long n,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": ";
        cout<<(NOD(n)-1)<<endl;
    }
}
