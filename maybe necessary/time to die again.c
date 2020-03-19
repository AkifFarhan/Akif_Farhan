#include<stdio.h>
int main()
{
    int a,c;
    scanf("%d",&a);
    c=a%2;
    if(c==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
