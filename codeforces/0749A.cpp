#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    if(n%2==0)
    {
        n=n/2;
        cout<<n<<"\n";
        for(t=1;t<=n;t++)
            cout<<"2 ";
          cout<<"\n";
    }
    else
    {
        n=(n-3)/2;
        cout<<n+1<<"\n";
        for(t=1;t<=n;t++)
            cout<<"2 ";
        cout<<"3"<<"\n";
    }
    return 0;
}
