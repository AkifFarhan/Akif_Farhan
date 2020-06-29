#include<bits/stdc++.h>
using namespace std;

void rotten(int n)
{
    if(n!=-1)
    {
        rotten(n-1);
     if(n==0)
        cout<<"1 ";
     else
      {
         cout<<"+ x";
         if(n==1) cout<<" ";

         if(n>1)
            cout<<"^"<<n<<" ";
      }
    }
}
int main()
{
    int n;
    cin>>n;
    rotten(n-1);
}
