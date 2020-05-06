#include<bits/stdc++.h>
using namespace std;

int g;

int small(int arr[], int n){
   int temp = arr[0];
   for(g=0; g<n; g++) {
      if(temp>arr[g]&&arr[g]!=0) {
         temp=arr[g];
      }
   }
   return temp;
}

int main()
{
    int i;
    cin>>i;
    while(i--)
    {
        int n,x;
        cin>>n>>x;
        double k;
        int a[n];
        double z=n+1;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
       while(z--)
       {
           double y=0;
           int l=0;
           for(int j=0;j<n;j++)
           {
              y=y+a[j];
              k=y/z;
              if(j==n-1 && k>=x)
              {
                  l=1;

               cout<<z<<endl;
                  break;
              }
              else if(j==n-1)
              {

                int s = small(a, n);
                a[i-1] = 0;
              }
           }
           if(l==1)
           {
               break;
           }

       }

    }
    return 0;
}
