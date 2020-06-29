#include<bits/stdc++.h>
using namespace std;

int a[100000];
int n;

int rec(int i,int j)
{
    if(j==n)
        return i;
    if(a[j]%2==0)
    {
        a[i]=a[j];
        i++;
        j++;
    }
    else
        j++;
    rec(i,j);
}

int main()
{
    cin>>n;
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];

    n=rec(0,0);

    for(i=0;i<n;i++)
        cout<<a[i]<<" " ;
}
