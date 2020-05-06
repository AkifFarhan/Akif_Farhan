#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n;
        if(n%2==0)
            k=(n-2)/2;
        else
            k=(n-1)/2;
        cout<<k<<endl;
    }
    return 0;
}
