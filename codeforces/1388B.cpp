#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x;
        cin>>n;

        x = (n+3) / 4 ;
        for(i=0;i<n-x;i++)
            cout<<"9";

        for(i=0;i<x;i++)
            cout<<"8";

        cout<<endl;
    }
}
