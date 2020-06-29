#include<bits/stdc++.h>
using namespace std;


int rec(int i,int j,int n)
{
    if(n==2)
        return 1;
    if(n%2==0||n==1)
        return 0;
    if(i>j)
        return 1;
    if(n%i==0)
        return 0;
    rec(i+2,j,n);
}

int main()
{
    int n,i=3;
    while(scanf("%d", &n))
    {
    int j=sqrt(n);

    if(rec(i,j,n))
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;
   }
}
