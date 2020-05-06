#include<bits/stdc++.h>
using namespace std;
int mul(int x,int n)
{
    int k;
    k=x;
    for(;n!=0;n--)
      {
          k=(k/2)+10;
          if(k<19)
              break;
           else
            x=k;
      }
      return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        x=mul(x,n);
        x=x-(m*10);
        cout<<(x>0?"NO":"YES")<<endl;
    }
    return 0;
}
