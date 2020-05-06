#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,p,t;
    cin>>n>>k;
    long long int x=1;
    while(1)
    {
        p = x * (x+1) / 2;
        t=p-k;
        if(t+x==n)
        {
            cout<<t<<endl;
            break;
        }
        x++;
    }
    return 0;
}
