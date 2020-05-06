#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,r,c;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if( a[i][j]== '*')
                k++;
        }
        if(k==1)
            r=i+1;
    }
    for(j=0;j<m;j++)
    {
        k=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]=='*')
                k++;
        }
        if(k==1)
            c=j+1;
    }
    cout<<r<<" "<<c;
    return 0;
}
