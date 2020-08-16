#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,ans=0,z=(pow(10,9)+7),i;
        cin>>n>>k;

        long long sqr = sqrt(n);

        for( i=1;i<=sqr;i++)
        {
            if(n%i==0)
            {
                if(i!=(n/i))
                    ans += pow(i,k)+pow(n/i,k);
                else
                    ans+=pow(i,k);
            }
        }
      cout<<(ans%z)<<endl;
    }
}
