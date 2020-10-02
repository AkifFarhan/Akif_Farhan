#include<bits/stdc++.h>
using namespace std;

void quicksort(int a[],int n)
{
    int pivot=a[0],j;
    int i=-1;
    for(j=1;j<n;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    for(j=0;j<n;j++)
    {
        if(a[j]==pivot)
            break;
    }
    swap(a[i+1],a[j]);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    quicksort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
