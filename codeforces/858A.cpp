#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long ans=n;
    long long n2=k,n5=k;

    while(n%2==0)
    {
        n2--;
        n/=2;
    }
    while(n%5 == 0)
    {
        n5--;
        n/=5;
    }

    if(n2>0)
    {
        while(n2--)
         ans*=2;
    }

    if(n5>0)
    {
        while(n5--)
         ans*=5;
    }

    cout<<ans<<endl;
}


