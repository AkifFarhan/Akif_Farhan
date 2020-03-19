#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int i,j,c;
    for(i=0,j=9;i<10;i++,j--)
    {
        c=a[j];
        a[j]=a[i];
        a[i]=c;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}
