#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        string s;
        long long a,j,n=0,k;

        cin>>s>>a;

        int z =  s.size();

        if(s[0]=='-')
            j=1;
        else
            j=0;

        if(a<0)
            a=a*(-1);

         for(k=j;k<z;k++)
         {
             n=(s[k]-'0')+n*10;
             n=n%a;
         }

         if(n==0)
            cout<<"Case "<<i<<": divisible"<<endl;
         else
            cout<<"Case "<<i<<": not divisible"<<endl;
    }
}
