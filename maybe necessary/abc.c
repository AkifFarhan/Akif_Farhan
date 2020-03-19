#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int b[5]={50,40,30,20,10};
    int c[5]={50,50,70,60,80};
    int i;
    double total[5];
    for(i=0;i<5;i++)
    {
        total[i]=a[i]/4.00+b[i]/4.00+c[i]/2.00;
    }
    for(i=0;i<5;i++)
    {
        printf(" roll %d\t%0.2lf\n",i+1,total[i]);
    }

    return 0;
}
