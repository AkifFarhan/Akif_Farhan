#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>x>>y>>a>>b;
        if(x<y)
            swap(x,y);

        if(a+a<=b)
            cout<<(x+y)*a<<endl;
        else
            cout<<y*b+(x-y)*a<<endl;
    }
    return 0;
}
