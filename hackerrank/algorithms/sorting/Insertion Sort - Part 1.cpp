#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,z=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k=n;
    int item=a[n-1];
    for(;k>-1;k--)
    {
        if(k==1)
        {
            a[k-1]=item;
            z=1;
        }
        else if(item<a[k-2])
        {
            a[k-1]=a[k-2];
        }
        else
        {
            a[k-1]=item;
            z=1;
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        if(z==1) break;
    }
}
