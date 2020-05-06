#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int ara[n-2];
    for(i=0;i<n-2;i++)
       cin>>ara[i];
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-1;j++)
        {
           // printf("%d ^ %d = %d\n",i,ara[j],i^ara[j]);
            if((i^ara[j])==0)
                break;
            if(j==n-2)
                cout<<i<<endl;
        }
    }
    return 0;
}
