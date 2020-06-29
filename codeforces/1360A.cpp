#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ans;

        cin>>a>>b;
        if(b>a)
            swap(a,b);
        if(b*2-a < 0)
            ans=0;
        else
            ans= ((b*2)-a);

        ans = (a+ans) * (a+ans);

        if(ans==39999)
            ans++;
        cout<<ans<<endl;
    }
}
