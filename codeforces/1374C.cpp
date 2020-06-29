#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0,ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                a++;
            else
                b++;

            if((b-a)>0 && ans<(b-a))
                ans++;
        }
        cout<<ans<<endl;
    }
}
