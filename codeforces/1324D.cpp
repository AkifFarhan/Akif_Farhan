#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0,i,j;
    cin>>n;

    int a[n],b[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        cin>>b[i];

    vector<int> c(n);
	for(i=0;i<n;i++)
        {
		  c[i] = a[i] - b[i];
        }

    sort(c.begin(),c.end());

	for (i=0;i<n;i++)
    {
		if (c[i] < 1)
            continue;
		int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
		//cout<<"i "<<i<<"pos "<<pos<<endl;
		ans += i-pos;
	}

    cout<<ans<<endl;
}
