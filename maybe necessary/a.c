#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=0;i=i-1)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
