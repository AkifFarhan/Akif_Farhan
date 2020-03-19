#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[500][500];
    int n,m,i,j,k=0;
    cin>>n>>m;
    m=2*m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j+=2)
        {
            if(a[i][j]+a[i][j+1] > 0)
                k++;
        }
    }
    cout<<k<<endl;
    return 0;
}
