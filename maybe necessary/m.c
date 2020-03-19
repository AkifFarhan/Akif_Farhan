#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=3;i++)
    {
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        c=c/100;
        printf("%lf",a+(a*b*c));
    }
    return 0;
}
