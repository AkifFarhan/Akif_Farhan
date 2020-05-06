#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    long long int t,a,b,j;
    cin>>t;
    while(t--)
        {
        cin>>a>>b;
        if(a<b)cout<<b-a<<"\n";
        else if(a==b)cout<<"0"<<"\n";
        else
        {
            j=b;
        for(;;)
          {
             b=b+j;
             if(a==b)
             {
                 cout<<"0"<<"\n";
                 break;
             }
             else if(a<b)
             {
                 cout<<b-a<<"\n";
                 break;
             }
          }
        }
    }
    return 0;
}
