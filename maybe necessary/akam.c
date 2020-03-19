#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int b[5]={50,40,30,20,10};
    int c[5]={50,50,70,60,80};
    int i,t;
    for(i=0;i<5;i++)
    {
        t=a[i]/4+b[i]/4+c[i];
        printf("roll %d\t %d\n",i+1,t);
    }
    return 0;
}
