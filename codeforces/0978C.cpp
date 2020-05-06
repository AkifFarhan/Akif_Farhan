#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k=0,i,z,j,l=0,y,g;
    cin>>n>>m;
    long long int a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    j=a[l];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<m;i++)
    {
        while(1)
        {
            if(l==0)
                g=b[i];
            else
                g=b[i]-y;
            if(b[i]<=j)
            {
               cout<<l+1<<" "<<g<<endl;
               break;
            }
            else
            {
                y=j;
                l++;
                j+=a[l];
            }
        }
    }
    return 0;
}
