#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>i;
    for(t=1;t<=i;t++)
    {
        int a,b,c,d,e=0;
        cin>>a;
        int ara[a];
        int ara2[a];
        for(b=0;b<a;b++)
            cin>>ara[b];
        for(c=0;c<a;c++)
           ara[c]=ara[c]%2;
        for(d=0;d<a;d++)
        {
            if(ara[0]!=ara[d])
                {
                    e=1;
                    break;
                }
        }
        if(e==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
