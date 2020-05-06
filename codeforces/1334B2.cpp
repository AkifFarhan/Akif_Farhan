#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,s=0;
        cin>>n>>x;
        int ar[n];
        for(i=0;i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(int j= 0 ;j<n; j++)
        {
            cout<<"values"<<ar[j]<<"\t";
        }
        for(i=0;i<n;i++)
        {
           s=s+ar[i];
        }
        int z=n;
        for(i=0;i<n;i++)
        {
            if( s/z >=x)
            {

               break;
            }
            else
            {
                s=s-ar[i];
                z=z-1;
            }
        }
        if(i==n)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<z<<endl;
        }
    }
    return 0;
}
