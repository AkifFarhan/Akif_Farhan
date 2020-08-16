#include<bits/stdc++.h>
using namespace std;

#define N 1000009
#define ll long long
bool flag[N];
vector<ll> primes;

void sieve()
{
    ll i, j;

    flag[0] = flag[1] = 1;
    for(i = 4; i < N; i += 2)
        flag[i] = 1;

    for(i = 3; i * i < N; i+=2)
    {
        if(!flag[i])
        {
            for(j = i*i; j < N; j += 2*i)
                flag[j] = 1;
        }
    }

    for(i = 2; i < N; i++)
    {
        if(!flag[i])
            primes.push_back(i);
    }
}

ll check(ll n)
{
    ll ans,i;

    for(i=0;i*i<=n;i++)
    {
        while( n % primes[i] == 0 )
        {
            ans=primes[i];
            n/=primes[i];
        }
    }
    if(n>1)
        return n;

    return ans;
}

int main()
{
   sieve();
   ll t,k;
   cin>>t;
   for(k=1;k<=t;k++)
   {
       ll j,n,m,z=1;

       cin>>n;
       for(j=0;j<n;j++)
       {
           cin>>m;
           z*=m;
       }

       z++;
       cout<<"Case #"<<k<<": ";
       cout<<check(z)<<endl;
   }
}
