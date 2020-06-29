#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
            {
                k=1;
                break;
            }
        }
        if(k==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
