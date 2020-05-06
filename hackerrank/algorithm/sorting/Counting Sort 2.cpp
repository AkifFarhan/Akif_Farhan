#include<bits/stdc++.h>
using namespace std;


void counting_sort(int a[],int n,int max)
{
    int count[100]={0};
    for(int i=0;i<n;++i)
      count[a[i]]++;

    for(int i=0;i<=max;i++)
    {
        for(int j=0;j<count[i];j++)
            cout<<i<<" ";
    }
}

int main()
{
    int n,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(max<a[i]) max=a[i];
    }
    counting_sort(a,n,max);
}
