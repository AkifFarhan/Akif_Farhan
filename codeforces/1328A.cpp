#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,j;
    cin>>t;
    while(t--)
        {
        cin>>a>>b;
           for(j=0;;j++)
           {
                if((a+j)%b==0)
                break;
           }
             cout<<j<<"\n";
        }
    return 0;
}
