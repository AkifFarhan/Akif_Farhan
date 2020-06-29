#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;

        int d=n%x;

        if(d-y<0)
         cout<<(n-(x+d-y))<<endl;
        else if(d-y>0)
            cout<<n-(d-y)<<endl;
        else
            cout<<n<<endl;
    }
}
