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
        if(b>a)
       {
        n=n-1;
        z=b-a;
        if(z==n)
            cout<<z;
        else
        {
            while(x>0)
            {
                z++;
                x=x-1;
                if(z==n)
                    break;
            }
            cout<<n;
        }
       }
       else
       {
           n=n-1;
        z=a-b;
        if(n==z)
            cout<<n;
        else
        {
            for(;x>0;x--)
            {
                z++;
                if(z==n)
                    break;
            }
            cout<<n;
        }
       }

    }
    return 0;
}

