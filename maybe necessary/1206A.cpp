#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,z,i,t,a[205],b[205],j,h=0,ara[500],l,k;
    cin>>y;
    for(i=0;i<y;i++)
    {
        cin>>a[i];
        ara[i]=a[i];
    }
    cin>>z;
    for(i=0;i<z;i++)
    {
        cin>>b[i];
        ara[i+y]=b[i];
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            for(l=0;i<(y+z-2);i++)
            {
                if(a[i]+b[j]!=ara[l])
                {
                    break;
                    k=1;
                }
            }
            if(k==1)
                break;
        }
        if(k==1)
          break;
    }
    cout<<a[i]<<" "<<b[j];
    return 0;
}
