#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int sqr=sqrt(n);

    if(n==1)
        return 0;
    for(int k=2;k<=sqr;k++)
    {
        if(n%k==0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {

        map<char,int>mp;
        string s;
        cin>>s;

        cout<<"Case "<<j<<": ";

        int i,z=s.size(),co=0,l=0;

        for(i=0;i<z;i++)
        {
            mp[s[i]]++;
        }

            for(auto u : mp)
            {
                if( prime(u.second) == 1)
                {
                    cout<<u.first;
                    l=1;
                }
            }

    if(l==0)
         cout<<"empty";
     cout<<endl;
    }
}
