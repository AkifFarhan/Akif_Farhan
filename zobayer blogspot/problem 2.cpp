#include<bits/stdc++.h>
using namespace std;

int i;
void reverse(int a[],int n)
{
    if(n<=i)
        return;
    cout<<a[i]<<" "<<a[n-1]<<endl;
    i++;
    reverse(a,n-1);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    reverse(a,n);
}
