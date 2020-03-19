#include<stdio.h>
int main()
{
    int i,a,c;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(c=1;c<=a;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
