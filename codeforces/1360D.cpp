#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m=0;
        cin>>n>>k;

        int z=sqrt(n);

        for(int i=1;i<=z;i++)
        {
            if( n%i == 0 )
            {
                if(i <= k)
                    m= max(m, i);
                if(n/i <= k)
                    m= max(m, n/i);
            }
        }
        cout<< n/m<<endl;
    }
}
