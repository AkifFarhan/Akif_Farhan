#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j;
        cin>>n;
        int a[n];
        int b[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        j = 0;
        for(int i=n/2;i<n;i++)
        {
            b[j]=a[i];
            j += 2;
        }

        j=1;
        for(int i=n/2-1;i>=0;i--)
        {
            b[j] = a[i];
            j += 2;
        }

        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
