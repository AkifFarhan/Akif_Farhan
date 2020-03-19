#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a;
    cin>>n;
    a=n%10;
    if(a<=5)
    {
        n=n-a;
        cout<<n;
    }
    else
    {
        if(a==6)
            cout<<n+4;
        else if(a==7)
            cout<<n+3;
        else if(a==8)
            cout<<n+2;
        else if(a==9)
            cout<<n+1;

    }
    return 0;
}
