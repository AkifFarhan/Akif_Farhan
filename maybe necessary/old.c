#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int i,a[n];
    scanf("%d",&a[0]);
    j=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(j<a[i])
            j=a[i];
    }
    printf("%d",j);
    return 0;
}
