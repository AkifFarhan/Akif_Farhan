#include<bits/stdc++.h>
#define fast                ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fast
    long long int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        if(k%2==0)
           cout<<(a*(k/2))-(b*(k/2))<<endl;
        else
        {
            cout<< (a*(k/2))+a-(b*(k/2))<<endl;
        }
    }
    return 0;
}
