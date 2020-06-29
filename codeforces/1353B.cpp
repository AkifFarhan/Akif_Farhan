#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);

        for(i=n-1,j=0;j<k;i--,j++)
        {
            if(a[j]<b[i])
                swap(a[j],b[i]);
            else
                break;
        }

        int ans=0;
        for(i=0;i<n;i++)
            ans+=a[i];
        cout<<ans<<endl;
    }
}
