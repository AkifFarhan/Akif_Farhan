#include<bits/stdc++.h>
using namespace std;

int a[100000];
int n;

void reverse(int i)
{
    if(n-i<=i)
        return;
    cout<<a[i]<<" "<<a[n-i-1]<<endl;
    reverse(i+1);
}

int main()
{
    cin>>n;
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    reverse(0);
}
