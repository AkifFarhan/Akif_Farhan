#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n)
{
    int i,j ,m,k;
    for(i=0;i<n;j++)
    {
        m = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[m])
            {
                m=j;
            }
        }
        if(m!=i)
        {
            k=a[i];
            a[i]=a[m];
            a[m]=k;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int a[]={10,5,2,8,7};
    int n = sizeof(a)/sizeof(a[0]);
    selection_sort(a,n);
    return 0;
}
