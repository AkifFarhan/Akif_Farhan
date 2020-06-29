#include<bits/stdc++.h>
using namespace std;

int rec(int n,int m)
{
    if(m==0)
        return n;
    rec(m,n%m);
}

int main()
{
    int n,m;
    cin>>n>>m;

   cout<<rec(n,m);
}

