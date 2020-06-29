#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int z;
        if(n>k)
            cout<<k<<endl;
        else
        {
            z=k+(k/n)*n;
           cout<<z<<endl;
        }
    }
}
