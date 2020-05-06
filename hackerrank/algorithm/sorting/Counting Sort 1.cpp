#include<bits/stdc++.h>
using namespace std;

int b[100];

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        b[a[i]]++;
    for(int i=0;i<100;i++)
        cout<<b[i]<<" ";
    return 0;
}
