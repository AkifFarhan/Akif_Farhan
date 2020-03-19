#include<stdio.h>
int main()
{
    int a,b,m;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        m=b-a;
    }
    else
    {
        m=a-b;
    }
    printf("%d\n",m);
    return 0;
}
