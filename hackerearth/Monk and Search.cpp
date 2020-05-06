#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>k>>x;
        if(k==1)
        {
            cout<<n-(upper_bound(a,a+n,x)-a)<<endl;
        }
        else
        {
            cout<<n-(lower_bound(a,a+n,x)-a)<<endl;
        }
    }
    return 0;
}
