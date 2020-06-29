#include<bits/stdc++.h>
using namespace std;

int rec(int lcm,int a,int b)
{
    if(a == 0 || b == 0)
        return 0;
    if( lcm % a == 0 && lcm % b == 0)
        return lcm;
    rec(lcm+1,a,b);
}

int main()
{
    int a,b,lcm;
    cin>>a>>b;

    if(a>b)
        lcm=a;
    else
        lcm=b;
    cout<<rec(lcm,a,b);
}
