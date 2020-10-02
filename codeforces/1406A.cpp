#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,z[102];
    cin>>t;
    while(t--)
    {
        int n,i,a,ans=0;
        cin>>n;
        memset(z,0,sizeof z);

        for(i=0;i<n;i++)
        {
          cin>>a;
          z[a]++;
        }

       for(i=0;i<102;i++)
        {
            if(z[i]==0)
            {
                ans+=i;
                z[i++];
                break;
            }
        }

        for(i=0;i<102;i++)
        {
            if(z[i]<=1)
            {
                ans+=i;
                z[i++];
                break;
            }
        }

        cout<<ans<<endl;
    }

}
