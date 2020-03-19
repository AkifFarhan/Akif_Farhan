#include<stdio.h>
int main()
{
    int i,j;
    double x,y,a1,b1,c1,a2,b2,c2;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&a1,&b1,&c1,&a2,&b2,&c2);
        x=(b2*c1-b1*c2)/(a1*b2-b1*a2);
        y=(a2*c1-a1*c2)/(a2*b1-a1*b2);
        printf("%lf\n %lf\n",x,y);
    }
    return 0;
}
