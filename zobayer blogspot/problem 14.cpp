#include<bits/stdc++.h>
using namespace std;

int a[100000];

int rec(int x,int l,int h)
{
    if(l>h)
        return -1;
    int mid=(l+h)/2;

    if(x == a[mid])
        return mid;
    else if(x < a[mid])
        return rec(x, l, mid-1);
    else if(x > a[mid])
        return rec(x,mid + 1, h);
}

int main()
{
    int n,q,x;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>q;
    while(q--)
    {
       cin>>x;
       if(rec(x,0,n-1)==-1)
        cout<<"NOT FOUND"<<endl;
       else
         cout<<rec(x,0,n-1)<<endl;
    }
}
