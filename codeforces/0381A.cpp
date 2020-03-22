#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,x,y,h,s=0,d=0;
    cin>>a;
    int ara[a];
    for(i=0;i<a;i++)
        cin>>ara[i];
    x=0;
    y=a-1;
    for(i=0;i<a;i++)
    {
       h=max(ara[x],ara[y]);
       if(ara[x]==h)
            x++;
       else
           y--;
       if(i%2==0)
          s=s+h;
       else
          d=d+h;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}
