#include<stdio.h>
int main()
{
    int i,j,l=0;
    scanf("%d",&j);
   for(i=1;i<=j;i++)
   {
        if(i%2==0)
        {
            printf("-%d",i);
            l=l-i;
        }
        else
        {
            printf("+%d",i);
            l=l+i;

        }
   }
    printf("=%d",l);
   return 0;
}
