#include<stdio.h>
int main()
{
    int i;
    //for(i=1;i<=3;i++)
    {
        double a1,a2,b1,b2,c1,c2,x,y;
          printf("a1=");
        scanf("%lf",&a1);
          printf("b1=");
        scanf("%lf",&b1);
          printf("c1=");
        scanf("%lf",&c1);
          printf("a2=");
        scanf("%lf",&a2);
          printf("b2=");
        scanf("%lf",&b2);
          printf("c2=");
        scanf("%lf ",&c2);
        x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
        y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
        printf(" %lf %lf",x,y);
    }
    return 0;
}
