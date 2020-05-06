#include<bits/stdc++.h>
using namespace std;

vector<string> a[100];
int n,i,j,x;

int main()
{
    cin>>n;
    for(i=0;i<n/2;i++)
    {
        cin>>x;
        string s;
        cin>>s;
        a[x].push_back("-");

    }
    for(;i<n;i++)
    {
        cin>>x;
        string s;
        cin>>s;
        a[x].push_back(s);
    }
    for(i=0;i<100;i++)
    {
        x=a[i].size();
        for(j=0;j<x;j++)
            cout<<a[i][j]<<" ";
    }
    return 0;

}
