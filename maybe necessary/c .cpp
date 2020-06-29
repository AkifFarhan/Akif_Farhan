#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int>s;
    cin>>n;
    while(n--)
    {
        int j,k;
        cin>>j>>k;
        for(;j<=k;j++)
            s.insert(j);
    }
    cout<<s.size()<<endl;
}
