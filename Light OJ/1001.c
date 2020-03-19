#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,a,b;
        scanf("%d",&n);
        a=n/2;
        b=n-a;
        printf("%d %d\n",a,b);
    }
    return 0;
}
