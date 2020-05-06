#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin>>i;
    while(i--)
    {
        int n,k=0;
        cin>>n;
        int p1=0,c1=0,p2,c2;
        while(n--)
        {
            cin>>p2>>c2;
            if(p2<p1||c2<c1||p2-p1<c2-c1)
            {
                k=1;
            }
            p1=p2;
            c1=c2;
        }
        if(k==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
