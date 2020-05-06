#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int min=a[1]-a[0];
    for(int i=0,j=1;j<n;i++,j++)
    {
        if(min>(a[j]-a[i]))
            min=(a[j]-a[i]);
    }
    for(int i=0,j=1;j<n;i++,j++)
    {
        if((a[j]-a[i])==min)
            cout<<a[i]<<" "<<a[j]<<" ";
    }
    return 0;
}
