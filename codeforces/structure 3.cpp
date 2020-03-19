#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,a,b;
    int x,y;
    cin>>n;
    for(i=0,t=n;t>=1,i<n;t--,i++)
    {
        if(i>0)
        {
            for(a=1;a<=i;a++)
                 cout<<" ";
        }
        for(b=1;b<=t;b++)
            cout<<"c";
            if(t>=1)
               cout<<"\n";
    }
    for(x=2,y=n-2;x<=n,y>0;x++,y--)
    {
        for(a=1;a<=y;a++)
            cout<<" ";
        for(b=1;b<=x;b++)
            cout<<"c";
        cout<<"\n";
    }
    return 0;
}
