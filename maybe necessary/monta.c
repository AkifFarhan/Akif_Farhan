#include<stdio.h>
int main()
{
    int n=0,m,a,i,s,b;
    scanf("%d%d",&b,&m);
    for(i=1;i<=b;i++)
    {
        scanf("%d",&s);
        n=n+s;
    }
    a=n-(m*b);
    printf("%d",a);
    return 0;
}
