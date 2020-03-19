#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    a=n*a+2*c;
    b=n*b+2*d;
    if(a<b)
        cout<<"First"<<endl;
    else if(a>b)
        cout<<"Second"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
