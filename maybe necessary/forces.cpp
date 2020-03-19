#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>i;
    for(t=1;t<=i;t++)
    {
        int a,b,c,d=0;
        cin>>a;
        int ara[a];
        for(b=0;b<a;b++)
            cin>>ara[b];
        for(c=0;;c++)
        {
            if(ara[c]==0)
                break;
            ara[c]=ara[c]-1;
            if(ara[c]==0)
                break;
            if(c==a-1)
                c=1;
        }
        for(c=0;c<a;c++)
        {
            if(ara[c]%2==1)
            {
                d=1;
                break;
            }
        }
        if(d==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
}
