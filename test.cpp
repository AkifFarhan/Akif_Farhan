#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,z;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        long long n,s,i,j,k=0;
        cin>>n>>s;
        long long a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n,greater<>());

        for(i=0;i<s;i++)
        {
            k+=a[i];

            if( i+1 == n )
                break;

        }

        k/=s;
        if(n>s)
        {
            if(k > a[s-1])
                k=a[s-1];
        }
        else
        {
            if(k > a[n-1])
                k=a[n-1];
        }

        cout<<"Case "<<z<<": "<<k<<endl;
    }
}
