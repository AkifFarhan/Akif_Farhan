#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    for(;;)
    {
        if(b<a*2||c<a*4)
            a=a-1;
        else if(a==0)
        {
            cout<<"0";
            break;
        }
        else
            break;
    }
    if(a>0)
    {
        cout<<a+a*2+a*4;
    }
    return 0;
}
