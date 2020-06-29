#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k=0,x=0,y=0;
        cin>>n;
        string s;
        cin>>s;

        for(i=0;i<n-1;i++)
        {
            if(s[i]>s[i+1])
                k=1;
        }
        if(!k)
        {
            cout<<s<<endl;
            continue;
        }

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                break;
            x++;
        }

        x++;

        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == '0')
                break;
            y++;
        }

     while(x--)
            cout<<"0";
     while(y--)
            cout<<"1";

     cout<<endl;
    }
}
