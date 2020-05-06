#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p1,p2=0,ans=0,sum=0,pre;
    cin>>t;
     while(t--)
     {
         cin>>p2;
         if(p2==p1)
            sum++;
         else
         {
            pre=sum;
            sum=1;
         }
         p1=p2;
         ans=max(ans,min(pre,sum));
     }
     cout<<2*ans<<endl;
}
