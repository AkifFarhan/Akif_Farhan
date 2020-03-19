#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x;
    double k=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        k=k+x;
    }
    cout<< setprecision(12)<<k/n;
    return 0;
}
