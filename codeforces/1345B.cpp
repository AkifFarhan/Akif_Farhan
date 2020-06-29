#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26000];
    for(int i=0;i<26000;i++)
        a[i]=(3*(i*i)+i)/2;
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int ans=0;

        while(n>1)
        {
            int pos = lower_bound(a, a + 26000, n+1) - a;
            ans++;
             n -= a[pos-1];
        }

        cout<<ans<<endl;
    }
}
