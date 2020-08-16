#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,k;

        cin>>a>>b>>x>>y>>k;

        int m,n;
        if(x>a)
            m=a-(x-a);
        else if(x<a)
            m=a+(a-x);
        else
            m=x;

        if(y>b)
            n=b-(y-b);
        else if(y<b)
            n=b+(b-y);
        else
            n=y;

        cout<<m<<" "<<n<<endl;
    }
}
