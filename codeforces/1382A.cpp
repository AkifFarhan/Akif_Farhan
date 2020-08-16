#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int i,j,n,m,k=0;
         cin>>n>>m;
         int a[n],b[m];
         for(i=0;i<n;i++)
            cin>>a[i];

         sort(a,a+n);

         for(i=0;i<m;i++)
         {
             cin>>b[i];

             if(k==0)
             {
             for(j=0;j<n;j++)
             {
                 if(b[i]==a[j])
                    k=b[i];
                 if(a[j]>b[i])
                    break;
             }
             }
         }

         if(k==0)
            cout<<"NO"<<endl;
         else
         {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<k<<endl;
         }

    }
}
