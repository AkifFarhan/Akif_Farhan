#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,e=0 ,o=0;
        cin>>n>>x;

        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i] % 2 ==0)
                e++;
            else
                o++;
        }

        int z=0;
      for(i=1 ; i<=o && i<=x ;i+=2)
      {
          if(x-i<=e)
          {
              cout<<"Yes"<<endl;
              z=1;
              break;
          }
      }

      if(z==0)
        cout<<"No"<<endl;
    }
}
