#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b,n=0,m=0;
        cin>>a;
        int ara[a];
        for(b=0;b<a;b++)
        {
            cin>>ara[b];
            if(ara[b]==0)
              n++;
            m+=ara[b];
        }
        m+=n;
        if(m==0)
        {
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
