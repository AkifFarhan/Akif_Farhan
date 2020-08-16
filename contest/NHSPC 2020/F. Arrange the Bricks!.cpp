#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 100000009

bool flag[N];
vector<ll> primes;

void sieve()
{
    ll i, j;
    flag[2] = 1;
    for(i = 4; i < N; i += 2)
        flag[i] = 1;
    for(i = 3; i * i <N; i+=2)
    {
        if(flag[i])
        {
            for(j = i*i; j< N; j += 2*i)
                flag[j] = 0;
        }
    }
    primes.push_back(2);
    for(i = 3; i < N; i += 2)
    {
        if(!flag[i])
            primes.push_back(i);
    }
}
ll NOD(ll n)
{
    ll i, c, ret = 1;
    for(i = 0; primes[i]*primes[i] <= n; i++)
    {
        for(c = 0;n%primes[i]==0; c++)
            n /= primes[i];
        ret*=(c+1);
    }
    if(n > 1)
        ret = ret * 2;
    return ret;
}

int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n*=2;
        n=NOD(n);

        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<<(n+1)/2<<endl;
    }
}
