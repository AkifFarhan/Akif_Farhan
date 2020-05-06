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
    int i=1;
    while(i--)
    {
        int n,x;
        n=4;
        x=10;
        double k;
        int a[4]={11,9,11,9};
        double z=n;

       for(int d=1;d<=n;d++)
       {
           double y=0 ;
           int l=0;
           for(int j=0;j<n;j++)
           {
              y=y+a[j];
              k=y/z;
              cout<<"k = "<<k<<endl;
              if(j==n-1 && k>=x)
              {
                  l=1;
                  cout<<"j="<<j;
                  cout<<z<<endl;
                  break;
              }
              int s = small(a, n);
              a[i-1] = 0;
              z=z-1;
           }
           if(l==1)
           {

            break;
           }
       }

    }
}
