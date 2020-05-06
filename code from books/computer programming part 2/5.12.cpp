#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[]={1,2,3,4,1,2,3,4,5};
    int r,i,n=9;
    r=ara[0];
    for(i=1;i<n;i++)
    {
        r=r^ara[i];
    }
    cout<<r;
    return 0;
}
