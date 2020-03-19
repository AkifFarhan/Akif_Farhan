#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int x,n,m,a,b=0,c=0;
        cin>>x>>n>>m;
        int ar1[n],ar2[m];
        for(a=0;a<n;a++)
        {
            cin>>ar1[a];
            if(ar1[a]==x)
                b++;
        }
        for(a=0;a<m;a++)
            cin>>ar2[a];
        if(b==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
