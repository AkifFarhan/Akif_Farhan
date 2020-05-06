#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l;
    double k=0;
    cin>>n>>l;
    double a[n+2];
    a[0]=0;
    a[n+1]=l;
    for(int i=1;i<n+1;i++)
        cin>>a[i];
    sort(a,a+n+2);
    for(int i=1;i<n+2;i++)
        k=max(k,a[i]-a[i-1]);
    k=max(k/2,max(a[1]-a[0],a[n+1]-a[n]));
    cout << fixed;
    cout << k;
    return 0;
}
