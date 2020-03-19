#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int w,h,k,n=0;
    cin>>w>>h>>k;
    while(k--)
    {
        n=n+w*2+(h-2)*2;
        w=w-4;
        h=h-4;
    }
    cout<<n<<endl;
    return 0;
}
