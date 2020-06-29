#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a-b<=0)
            cout<<b<<endl;

        else
        {
            if(c<=d)
                cout<<"-1"<<endl;

            else
                {
                    long long ans=(a-b)/(c-d);
                    if(ans*(c-d)<a-b)
                        ans++;
                    cout<<b+ans*c<<endl;
                }
        }
    }
}
