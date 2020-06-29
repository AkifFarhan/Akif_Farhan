#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,ans=0;
    string ko("UUDDLRLRBA");
    cin>>s;
    int n = s.size();
    int z=0;

    for(i=0;i<n;i++)
    {
        if( ko[z] == s[i])
        {
            z++;
        }
        else
        {
            z=0;
            if(s[i] == 'U')
                z=1;
            if(s[i-1]=='U' && s[i] == 'U')
                z=2;
        }
        if(z==10)
        {
            ans++;
            z=0;
        }
    }
    cout<<ans<<endl;
}
