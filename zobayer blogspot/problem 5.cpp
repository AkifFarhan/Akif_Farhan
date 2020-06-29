#include<bits/stdc++.h>
using namespace std;

int k;

void rotten(int x,int n)
{
    if(n==-1)
        return;
    rotten(x,n-1);
    k+=pow(x,n);
}

int main()
{
    int n,x;
    cin>>x>>n;
    rotten(x,n-1);
    cout<<k;
}
