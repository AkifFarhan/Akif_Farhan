#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int n,x,a,b,z;
        cin>>n;
        cin>>x;
        cin>>a;
        cin>>b;
        n=n-1;
        z=b-a;
        if(n==z)
            cout<<n;
        else
        {
            for(;x>0;x--)
            {
                n++;
                if(n==z)
                    break;
            }
            cout<<n;
        }
    }
    return 0;
}
