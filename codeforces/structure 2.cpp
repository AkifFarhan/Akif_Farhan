#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,a,b;
    int z,c,x;
    cin>>n;
    for(t=0,i=n;t<=(n-1)/2;t++,i=i-2)
    {
        if(t>0)
        {
            for(a=1;a<=t;a++)
                cout<<" ";
        }
        for(b=1;b<=i;b++)
            cout<<"c";
            cout<<"\n";
    }
    for(c=3,a=a-2;a>=0,c<=n;a--,c=c+2)
    {
        for(z=1;z<=a;z++)
            cout<<" ";
        for(x=1;x<=c;x++)
            cout<<"c";
        cout<<"\n";
    }
    return 0;
}
