#include<stdio.h>
#define DEBUG 0

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int l,i,sum=0,tmp;

    printf("Enter number of integers: ");
    scanf("%d",&l);
    if(DEBUG)printf("---\nDEBUG\n\tNUMBER of integers: %d\nENDDEBUG\n---\n",l);

    for(i=0;i<l;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&tmp);
        if(DEBUG)printf("---\nDEBUG\n\tNumber %d: %d\nENDDEBUG\n---\n",i+1,tmp);
        sum=add(sum,tmp);
        if(DEBUG)printf("---\nDEBUG\n\tCurrent Sum: %d\nENDDEBUG\n---\n",sum);
    }

    printf("The average is %f\n",(double)sum/l);

    return 0;
}
