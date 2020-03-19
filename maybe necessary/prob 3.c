#include<stdio.h>
int main()
{
    int i,j;
    double loan,interest,total,profit,monthly,year;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%lf %lf",&loan,&interest);
        total=loan+loan*interest/100.00;
        profit=total-loan;
        printf("%0.2lf %0.2lf\n ",total,profit);
        scanf("%lf",&year);
        monthly=total/(year*12);
        printf("%lf\n",monthly);
    }
    return 0;
}
