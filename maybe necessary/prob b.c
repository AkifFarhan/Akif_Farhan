#include<stdio.h>
int main()
{
    int r,i,h;
    scanf("%d",&r);
    h=r;
    for(i=1;i<=r;i++)
    {
        int s;
        for(s=h-1;s>0;s--)
        {
            printf(" ");
        }
        int a,b;
        for(a=1;a<=r;a++)
        {
            for(b=1;b<=a;b++)
            {
                printf("* ");
            }
            printf("\n");
        }
        h--;
    }
    return 0;
}
