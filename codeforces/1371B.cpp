#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,r;
        cin>>n>>r;
        long long ans = min(n,r);

        ans--;
       ans=((ans*(ans+1))/2);

if(n>r)
    ans+=r;
else
    ans++;

       cout<<ans<<endl;
    }
}
