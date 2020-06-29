#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,i,j,t;
   cin>>t;
   while(t--)
     {
      cin>>n;
      int  a[n],m,ans;

      for(i=0;i<n;i++)
         cin>>a[i];

      sort(a,a+n);

    for(i=1;i<=1024;i++)
    {
         m=0;

         for(j=0;j<n;j++)
         {
            if(binary_search(a,a+n,(i^a[j])))
             m++;
         }

         if(m==n)
         {
            ans=i;
            break;
         }
    }

     if(m==n)
      cout<<ans<<endl;
     else
      cout<<"-1"<<endl;

     }
}
