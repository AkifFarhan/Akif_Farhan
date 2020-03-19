#include<stdio.h>
int main()
{
    char a;
    double b,c;
    scanf("%c",&a);
    scanf("%lf %lf",&b,&c);
    c=(c*15)/100;
    b=b+c;
    printf("%TOTAL = R$ %0.2lf\n",b);
    return 0;
}
