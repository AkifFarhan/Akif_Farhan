#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y,n,m;
        cin>>a>>b>>x>>y>>n;

         m = min(a,b);

         if(a==m)
         {
             a -= min(n,(a-x));
             n -= min(n,(a-x));
             //cout<<"n "<<n<<endl;

             if(n>0)
                b-= min(n,(b-y));
         }
         else if(b==m)
         {
             b -= min(n,(b-y));
             n -= min(n,(b-y));

            if(n>0)
               a -= min(n,(a-y));
         }

         cout<<a<<" "<<b<<endl;
    }
}
