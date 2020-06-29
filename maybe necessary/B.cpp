#include<bits/stdc++.h>
using namespace std;

int main()
{
long long x,y,z;
long long d,i;
cin>>x;
cin>>y;
cin>>z;
d=1;
i=1;
  while(i<=x&&i<=y&&i<=z){
   if(x%i==0&&y%i==0&&z%i==0)
    d=i;
    i++;
}
cout<<d<<endl;
return 0;
}
