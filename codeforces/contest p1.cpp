#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a=0,b=0,h;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
         char s;
        scanf("%c",&s);
        if(s=='L')
        a=a-1;
        else
        b=b+1;
    }
    h=1-a+b;
    printf("%d",h);
    return 0;
}
