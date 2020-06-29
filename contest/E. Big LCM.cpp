#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll f_lcm(ll arr[],ll n)
{
    ll z = arr[0];
    for (ll i = 1; i < n; i++)
    {
        z=(((arr[i]*z))/(gcd(arr[i],z)));
    }
    return z;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
    cin>>a>>b>>c;
    ll n=b-a+1;
    ll arr[n];


    for(ll i=0;i<n;i++)
    {
        arr[i]=a;
        a++;
    }

    ll lcm = f_lcm(arr,n);

    //cout<<lcm<<endl;
    int ans=0;
    int sqr=sqrt(lcm);

    for(int i = 1;;i++)
    {
        int g  = pow(c,i);

        if(g%c!=0)
           g++;

        if(lcm%g==0)
            ans=i;

        if(g>sqr)
            break;
    }
    cout<<ans<<endl;
    }
}
