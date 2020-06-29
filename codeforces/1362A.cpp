#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;

        if(a<b) swap(a,b);

        if(a%b == 0)
        {
            long long z = a/b , ans=0;
            if(z && !(z & (z - 1)))
            {

               while( b*8 <= a)
               {
                   b*=8;
                   ans++;
               }

               if(b*4 <= a)
                {
                    b*=4;
                    ans++;
                }

               if(b*2 <= a)
               {
                   ans++;
               }

               cout<<ans<<endl;
            }
            else
                cout<<"-1"<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
