#include<bits/stdc++.h>
using namespace std;

int a[100000];
int m1,m2;

void rec(int n)
{
    if(n<0)
        return;

    if(a[n]>m1)
    {
        m2=m1;
        m1=a[n];
    }
    if( a[n]<m1 && a[n]>m2 )
        m2=a[n];

    rec(n-1);
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

//    m1=max(a[n-1],a[n-2]);
//    m2=min(a[n-1],a[n-2]);
m1=-1;
m2=-1;

    rec(n-3);
    cout<<m2;
}
