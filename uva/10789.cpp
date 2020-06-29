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
        string s;
        cin>>s;
        cout<<"Case "<<j<<": ";

        int i,z=s.size(),co=0,l=0;

        s[z]='@';

        for(i=0;i<z;i++)
        {
            co++;
            if(s[i+1] != s[i])
            {
                if( prime(co) == 1 )
                {
                    cout<<s[i];
                    l=1;
                }
                co=0;
            }
        }

        if(l==0)
            cout<<"empty";
        cout<<endl;
    }
}
