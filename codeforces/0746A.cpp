#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,a,p,n,i;
    cin>>l>>a>>p;
    for(i=l;l>-1;l--)
    {
        if(l==0)
        {
            cout<<"0"<<endl;
            break;
        }
        else if((l*2)<=a && (l*4)<=p)
        {
            cout<<l+l*2+l*4<<endl;
            break;
        }
    }
    return 0;
}
