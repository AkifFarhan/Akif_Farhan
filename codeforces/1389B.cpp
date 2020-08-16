#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,z,i,ans,sum,high,t,pos;
        cin>>n>>k>>z;

        int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        ans = 0;
        for(t=0;t<=z;t++)
        {
            sum=0;
            high=0;
            pos = k - (2*t);

            if(pos<0)
                continue;

            for(i=0;i<=pos;i++)
            {
                high = max( high , (a[i]+a[i+1]) );
				sum += a[i];
            }
            ans = max( ans , sum+high*t );
        }
        cout<<ans<<endl;
    }
}
