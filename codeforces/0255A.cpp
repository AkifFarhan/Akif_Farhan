#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
       cin>>n;
    int c=0,b=0,k=0,x=1,y=2,z=3,i,ara[n],j;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if((i+1)==x)
        {
            c=c+ara[i];
            x+=3;
        }
        else if((i+1)==y)
        {
            b=b+ara[i];
            y+=3;
        }
        else if((i+1)==z)
        {
            k=k+ara[i];
            z+=3;
        }
    }
    if(c>b&&c>k)
        cout<<"chest";
    else if(b>c&&b>k)
        cout<<"biceps";
    else cout<<"back";
    return 0;
}
