#include<stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d",&l);
    for(k=1;k<=l;k++)
    {
        for(i=1;i<=l-k+1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
