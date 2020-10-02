#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n)
{
    int i,hole,item,k=0;

    for(i=1;i<n;i++)
    {
        item=a[i];

        hole=i;

        while(hole>0&& a[hole-1]>item)
        {
            a[hole]=a[hole-1];
            hole=hole-1;
            k++;
        }
        a[hole]=item;
     }
     cout<<k;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertion_sort(a,n);
}
