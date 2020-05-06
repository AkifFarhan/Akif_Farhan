#include<bits/stdc++.h>
using namespace std;
bool cmp(int x ,int y)
{
    return x>y;
}
int main()
{
    int a[]={9,2,3,4,5,6,7,8,1};
   int  n=sizeof(a)/sizeof(a[0]);

    sort(a,a+n,cmp);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
