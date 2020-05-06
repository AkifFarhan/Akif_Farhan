#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>k;
        m=n-n%k;
        m+=min(n%k,k/2);
        cout<<m<<endl;
    }
    return 0;
}
