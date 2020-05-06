#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,l=0,sum;
    cin>>k;
    for(i=19;l!=k;i++)
    {
     int j=i;
     j=i;
     sum=0;
    while (j >0)
     {
       sum+=j%10;
            j/=10;
    }
       if(sum==10)
          l++;

    }
    cout<<i-1<<endl;
}
