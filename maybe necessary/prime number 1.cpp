#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int prime(int n)
{
    int i,root;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    root=sqrt(n);
    for(i=3;i<=root;i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,m;
    while(1) {
      cout<<"Please enter a number (enter 0 to exit): ";
      cin>>n;
if(n == 0) {
break;
}
if(1 == prime(n)) {
cout<<"it is a prime number.\n";
}
else {
cout<<"it is not a prime number.\n";
}
}
return 0;
}
