#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(int j=0;j<m;j++)
        cin>>b[j];

    sort(a,a+n);
    sort(b,b+m);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            k=a[i]-b[j];
            if(k<0) k*=-1;
            if(k<2)
            {
                c++;
                b[j]=105;
                break;
            }
        }
    }
    cout<<c<<endl;
}
