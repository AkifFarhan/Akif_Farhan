#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,n;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            a[i-1][j-1]=i*j;
        }
    }
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,a[n-1][i-1]);
    }
    return 0;
}
