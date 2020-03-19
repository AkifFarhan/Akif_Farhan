#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,a;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%lf\n",a);
    return 0;
}
