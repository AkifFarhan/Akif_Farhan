#include<bits/stdc++.h>
using namespace std;

int m;
int big_mod(int n,int p )
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        int res = big_mod(n,p/2);
        return ((res%m) *(res%m))%m;
    }
    return ((n%m)*(big_mod(n,p-1)%m))%m;
}

int main()
{
    int n,p;
    cin>>n>>p>>m;
    cout<<big_mod(n,p);
}
