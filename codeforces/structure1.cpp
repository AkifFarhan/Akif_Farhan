#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,b,a,c,d,e;
    cin>>a;
    for(i=a;i>=1;i--)
    {
        for(b=1;b<=i;b++)
        {
          cout<<"*";
        }
         cout<<"\n";
    }
     for(c=2;c<=a;c++)
    {
        for(d=1;d<=c;d++)
         {
             cout<<"*";
         }
         cout<<"\n";
    }
    return 0;
}
