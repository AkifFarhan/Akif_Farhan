#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
     int n,a,b,c,d;
     cin>>n>>a>>b>>c>>d;
     int l=(a-b)*n,r=(a+b)*n;
     if(r<c-d||l>c+d)
         cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
    }
    return 0;
}
