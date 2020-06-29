#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,z,k,ans=0;
        cin>>n>>k;

        string s;
        cin>>s;

        z=k;

        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                if(z<k)
                    ans--;
                z=0;
            }
            else
            {
                z++;
                if(z == k+1)
                {
                    ans++;
                    z=0;
                }
            }
        }

        cout<<ans<<endl;
    }
}
