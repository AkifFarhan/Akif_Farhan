#include<stdio.h>
int main()
{
    int i,j,a,b;
      scanf("%d",&b);
        for(j=1;j<=b;j++)
        {

            for(i=1;i<=b-j+1;i++)
            {
                printf("*");
            }
        printf("\n");
        }
    return 0;
}
