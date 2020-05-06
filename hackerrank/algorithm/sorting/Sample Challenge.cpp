#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
