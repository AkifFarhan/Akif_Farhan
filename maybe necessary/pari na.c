#include<stdio.h>
int main()
{
    double x,y,a,b;
    scanf("%lf",&a);
    printf("%lf\n",a);
    scanf("%lf",&b);
    printf("%lf\n",b);
    x=(a+b)/2;
    y=(a-b)/2;
    printf("%0.2lf %0.2lf\n",x,y);
    return 0;
}
