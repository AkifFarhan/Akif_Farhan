#include<bits/stdc++.h>
using namespace std;

int find_2and5(int st,int en)
{
    int n2=0,n5=0,b;

    for( ; st<=en ; st++)
    {
        b=st;
        while(b%2==0)
        {
            n2++;
            b/=2;
        }

        while(b%5==0)
        {
            n5++;
            b/=5;
        }
    }

    if(n2>n5)
      return n5;
    else
      return n2;
}

int main()
{
    int t,i;
    cin>>t;
    for(i=1 ; i<=t  ; i++)
    {
        int ans = 0;
        int n,r,p,q,r1;
        cin>>n>>r>>p>>q;

        r1=n-r;

        if(r1>r)
        {
            ans += find_2and5(r1+1,n);
            ans -= find_2and5(1,r);
        }
        else
        {
            ans += find_2and5(r+1,n);
            ans -= find_2and5(1,r1);
        }


        p = find_2and5(p,p);
        ans += p*q;

        cout<<"Case "<<i<<": "<<ans<<endl;

    }
}
