#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        long long a,b,n;

        cin>>a>>b>>n;

        if(a > n || b > n)
            cout<<"0"<<endl;
        else
        {
        for(i=1;;i++)
        {
            if(a>b)
                b+=a;
            else
                a+=b;

            if(a > n || b > n)
            {
                cout<<i<<endl;
                break;
            }
        }
        }
    }
}
