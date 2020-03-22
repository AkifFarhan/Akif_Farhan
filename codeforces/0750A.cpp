#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double n,k,s;
    cin>>n>>k;
    k=240-k;
    while(1)
    {
        s=(n/2)*(5+5*n);
        if(k>=s)
            break;
        n=n-1;
    }
    cout<<n<<endl;
    return 0;
}
