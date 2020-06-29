#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ,i,to,tz,o[1005],z[1005];
    cin>>t;
    while(t--)
    {
         to=tz=o[0]=z[0]=0;

         string s;
         cin>>s;

         int n= s.size();

         for( i = 0 ; i<n ; i++ )
         {
             if(s[i]=='1') to++;
             o[i+1] = o[i] + (s[i] == '1');

             if(s[i] == '0') tz++;
              z[i+1] = z[i] + (s[i] == '0');
         }

         int ans = 1005;

         for( i = 0 ; i<n ; i++ )
         {
             int l1 = z[i]+to-o[i];
             int l0 = o[i]+tz-z[i];

             ans = min(ans , min(l1,l0));
         }

         cout<<ans<<endl;
    }
}
