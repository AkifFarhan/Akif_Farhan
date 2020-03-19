#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,z1,z2,z3,y1,y2,y3;
    cin>>a;
    cin>>b;
    cin>>c;
    z1=a+b;
    z2=a+c;
    z3=b+c;
    if(z1>c||z2>b||z3>a)
     {
            cout<<"0";
     }
    else
     {
     if(z1<z2&&z1<z3)
        cout<<c-z1+1;
     else if (z2<z1&&z2<z3)
        cout<<b-z2+1;
     else if(z3<z1&&z3<z2)
        cout<<a-z3+1;
     }
}
