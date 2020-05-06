#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=0,t,x,y=0;
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t>i)
            i=t;
    }
    cin>>m;
    while(m--)
    {
        cin>>x;
        if(x>y)
            y=x;
    }
    cout<<i<<" "<<y<<endl;
    return 0;
}
