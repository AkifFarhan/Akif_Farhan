#include<bits/stdc++.h>
using namespace std;
#define	fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    fast;
    int n,q;
    cin>>n>>q;
    int a[n];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
	a[i]+=a[i-1];
    }
    for(int i=0;i<q;i++)
    {
        int k;
        cin>>k;
		int j=lower_bound(a+1,a+n+1,k)-(a+1);
	    cout <<j+1<< "\n" ;
    }
    return 0;
}
