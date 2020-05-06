#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    long long int m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>m;
        int *x =upper_bound(a,a+n,m);
        int b=x-a;
        cout<<b<<endl;
    }
    return 0;
}
