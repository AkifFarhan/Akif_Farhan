#include<bits/stdc++.h>
using namespace std;

long long z=0;

long long rotten(long long n)
{
    z++;
    if(n<3)
        return 1;
    return rotten(n-1) + rotten(n-2);
}

int main()
{
    long long n;
    cin>>n;

    long long k=rotten(n);
    cout<<k;
    cout<<endl<<z;
}
