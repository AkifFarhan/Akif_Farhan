#include<bits/stdc++.h>
using namespace std;
int FindRotationTime(int a[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
    if(a[low]<=a[high]) return low;

    int mid=(low+high)/2;
    int next=(mid+1)%n , prev=(mid+n-1)%n;

    if(a[mid]<=a[next] && a[mid]<=a[prev])
        return mid;

    else if (a[mid]<=a[high]) high=mid-1;

    else if(a[mid]>=a[low]) low=mid+1;
    }
    return -1;
}

int main()
{
    int a[]={9,8,1,2,3,4,5,6,7};
    int count =  FindRotationTime(a,sizeof(a)/sizeof(a[0]));
    cout<<count;
}
