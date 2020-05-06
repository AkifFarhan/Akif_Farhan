#include<bits/stdc++.h>
using namespace std;

int count(int m,int *x,int n)
{
    int l=0,h=n-1;
    int mid =(h+l)/2;
    while(l<=h)
    {
        if(x[mid]<=m&&x[mid+1]>m)
        {
            return mid;
        }
        else if(m>x[mid])
            l=mid+1;
        else
            h=mid-1;
    }
}

int main()
{
    int n,q,m;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    cin>>q;
    int y[q];
    while(q--)
    {
        cin>>m;
        cout<<count(m,x,n);
    }
    return 0;
}
