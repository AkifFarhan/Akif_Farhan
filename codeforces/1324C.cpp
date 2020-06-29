#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int i,j=-1,ans=0;
      string s;

      cin>>s;
      int n=s.size();

      for(i=0;i<n;i++)
      {
          if(s[i]=='R')
          {
           ans=max(ans,i-j);
           j=i;
          }
      }
      ans=max(ans,i-j);
      cout<<ans<<endl;
    }
}
