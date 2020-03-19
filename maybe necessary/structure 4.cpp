#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,j,x;
    cin>>n;
    for(i=1,x=n-2;i<=n/2;ic ++,x=x-2)
    {
        for(t=1;t<=i;t++)
        {
            cout<<"c";
        }
        for(j=1;j<=x;j++)
        {
            cout<<" ";
        }
        for(t=1;t<=i;t++)
        {
            cout<<"c";
        }
        cout<<"\n";
    }
    return 0;
}
