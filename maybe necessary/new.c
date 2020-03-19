#include<stdio.h>
int main()
{
    int i,j,a,b,c;
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>=b&&a>=c)
        {
            printf("%d\n",a);
        }
        else if(b>=a&&b>=c)
        {
            printf("%d\n",b);
        }
        else if(c>=b&&c>=a)
        {
            printf("%d\n",c);
        }
    }
    return 0;
}
