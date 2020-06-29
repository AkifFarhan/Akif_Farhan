#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x,m,y=0,z=0;

        cin>>n>>x>>m;

        int i;

        for(i=0;i<m;i++)
        {
            int l,r;
            cin>>l>>r;
            if(y==0 && z==0)
            {
                if(l<=x && r>=x)
                    y=l , z=r;
            }
            else
            {
                if(l<=z && r>=y)
                {
                    y = min(l,y);
                    z = max(r,z);
                }
			}
        }
        cout<<z-y+1<<endl;
    }
}
