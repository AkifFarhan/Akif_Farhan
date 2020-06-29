#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,i;
    scanf("%lld", &n);

    while(n--)
    {
        ll a,b,ans=0,g;
        scanf("%lld %lld", &a, &b);

        g = __gcd(a,b);

        for(i=1; i*i<=g; i++)
        {
            if(g%i==0)
            {
             ans+=2;
             if(i*i==g)
                ans--;
            }
        }
        printf("%lld\n", ans);
    }
}
