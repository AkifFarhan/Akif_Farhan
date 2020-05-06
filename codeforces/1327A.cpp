#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,n,k;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n>>k;
        if(n%2==0&&k%2==0)
        {
        if(n>=(k*k))
            cout<<"YES"<<endl;
        else
            cout<<"N0"<<endl;
        }
        else if(n%2==1&&n%2==1)
        {
            if(n>=(k*k))
            cout<<"YES"<<endl;
        else
            cout<<"N0"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}
