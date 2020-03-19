#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,e1,e2,e3,e4,e5,e6;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    e1=a+b;
    e2=a+c;
    e3=a+d;
    e4=b+c;
    e5=b+d;
    e6=c+d;
    if(e1==e2||e1==e3||e1==e4||e1==e5||e1==e6||e2==e3||e2==e4||e2==e5||e2==e6||e3==e4||e3==e5||e3==e6||e4==e5||e4==e6||e5==e6)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
