#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if (a*a+b*b==c*c)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
