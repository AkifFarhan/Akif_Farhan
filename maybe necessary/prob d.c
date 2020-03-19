#include<stdio.h>
int main()
{
    int i,j,n,k,a,b;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d %d",&n,&k);
        a=k+1;
        b=n/a;
        if(b<a)
        {
            printf("%d\n",b+1);
        }
        else
        {
            printf("%d\n",a);
        }

    }
    return 0;
}
