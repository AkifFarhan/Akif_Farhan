#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i,a,c,h,d;
    cin>>n;
    for(i=0;pow(2,i)<n;i++)
    {}
    h=pow(2,i-1);
    char b[i];
    b[0]='1';
    for(a=i-2,c=1;a<i;a--,c++)
    {
        if(pow(2,a)+h < n)
        {
             h=h+pow(2,a);
             b[c]='1';
        }
       else
        b[c]='0';
    }
    for(d=0;d<7;d++)
        cout<<b[d];
    return 0;
}
