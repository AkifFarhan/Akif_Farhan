//lower_bound
//first occurrence in the array

#include<bits/stdc++.h>
using namespace std;

int lower(int a[],int n,int x)
{
    int l=0,h=n-1,res,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(x==a[mid])
           {
               res=mid;
               h=mid-1;
           }
        else if(x>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    return res;
}

int main()
{
    int a[]={1,2,3,3,3,4,4,4,5,6};
    int n=(sizeof(a)/sizeof(a[0]));
    sort(a,a+n);
    cout<<lower(a,n,4);
}
