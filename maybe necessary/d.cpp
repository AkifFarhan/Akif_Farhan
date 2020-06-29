#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,sum=0,m;
    cin>>a>>b>>x;
    int n=-1;

    for(;a<=b;a++)
    {
        int num;
        num=a;
      while (num != 0)
        {
        sum = sum + num % 10;
        num = num / 10;
        }
      if(sum==x)
      {
          if(n==-1)
            n=sum;
          m=sum;
      }

    // cout<<sum<<" "<<m<<endl;
      sum=0;
    }
    cout<<n<<endl<<m;
    return 0;
}
