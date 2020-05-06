#include<bits./stdc++.h>
using namespace std;
int main()
{
    int t,m,mx,a,n,i;
    cin>>t;
    while(t--)
    {
        map<int,int>occ;
        mx=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            occ[a]++;
            mx=max(mx,occ[a]);
        }
         int x=min(mx-1, (int)occ.size());
         int y=min(mx, (int)occ.size()-1);
         cout<<max(x,y)<<endl;
    }
}
