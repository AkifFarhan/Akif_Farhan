#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k,z,j;
        cin>>n;
        k = n*2;

        int a[k];

        for(i=0;i<k;i++)
         cin>>a[i];


        for( i=0; i < k ; i++)
        {
            z = a[i];

            if(z!=0)
            {
                for(j=i+1 ; j<k ; j++)
                {
                    if(z == a[j])
                      a[j]=0;
                }
            }
        }

        for(i=0;i<k;i++)
        {
            if(a[i]!=0)
                cout<<a[i]<<" ";
        }

        cout<<endl;
    }
}
