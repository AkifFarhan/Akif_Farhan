#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if((k*k)>n || n%2!=k%2)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}
