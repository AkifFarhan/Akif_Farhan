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

       if(a<b)
        swap(a,b);

       int c = (b*2)-a;

       if(c<=0)
        cout<<b<<endl;
     else
     {

         c= b*2-a;
         c/=2;
         c=b-c;

         if(b-c>1)
            c++;
        cout<<c<<endl;
     }
    }
}
