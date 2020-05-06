#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,b,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>q;
    for(int i=0;i<q;i++)
    {
        k=0;
        cin>>p;
        b=upper_bound(a,a+n,p)-a;
        for(int j=0;j<b;j++)
            k=k+a[j];
        cout<<b<<" "<<k<<endl;
    }
    return 0;
}
