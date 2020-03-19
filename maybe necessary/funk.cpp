#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,h,m,num=3,arr[]={1,2,3,4,5,6,7,8,9,10};
    l=0;
    h=9;
    for(;;)
    {
        m=(l+h)/2;
        if(num==arr[m])
        {
            cout<<num;
            break;
        }
        else if(num<m)
            h=m-1;
        else
            l=m+1;
    }
    return 0;
}
