#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(b%a==0)
            cout<<a<<" "<<b<<endl;
        else
            cout<<"-1"<<endl;
    }
}
