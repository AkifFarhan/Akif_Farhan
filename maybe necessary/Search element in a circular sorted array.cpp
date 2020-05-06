#include<bits/stdc++.h>
using namespace std;

int search(int a[],int n,int x)
{
    int l=0;
    int h=n-1;
    int mid = (l+h)/2;
    while(l<=h)
    {
        if(a[mid]==x)
            return mid;
        if(a[mid]<=a[h])
            {
                if(x>a[mid]&&x<=a[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
         else
         {
             if(a[l]>=x&&x<a[mid])
                h=mid-1;
             else
                l=mid+1;
         }
    }
    return -1;
}

int main()
    {
        int a[]={10,11,12,1,2,3,4,5,6,7,8,9};
        int x;
        cout<<"enter x: ";
        cin>>x;
        int n=sizeof(a)/sizeof(a[0]);
        int result =search(a,n,x);
        if(result==-1)
            cout<<"not found";
        else cout<<"we got it";
        return 0;
    }

