#include<stdio.h>
int main()
{
    int i,t,h=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a;
        scanf("%d",&a);
        h=h+a;
    }
    if(h==0)
    {
        printf("EASY\n");
    }
    else
    {
        printf("HARD\n");
    }
    return 0;
}
