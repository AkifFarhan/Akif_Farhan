#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,z=0,k;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            z+=a[i];
        }

        if(z==n)
        {
            if(n%2==1)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
        else
        {
          for(i=0;i<n;i++)
            {
                if(a[i]>1)
                 {
                    k=i;
                    break;
                 }
            }
            if(k%2==1)
                cout<<"Second"<<endl;
            else
                cout<<"First"<<endl;
        }
    }
}
