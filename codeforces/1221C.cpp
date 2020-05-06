#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,m,x,ans;
        cin>>c>>m>>x;
        int les=min(c,min(m,x));
        ans=les;
        c-=les;
        m-=les;
        x-=les;
        if(c==0||m==0)
        {
            cout<<ans<<endl;
        }
        else if(x==0)
        {
            ans+=min((c+m)/3,min(c,m));
            cout<<ans<<endl;;
        }
    }
    return 0;
}
