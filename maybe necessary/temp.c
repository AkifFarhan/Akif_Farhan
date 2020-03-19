#include<stdio.h>
int main()
{
    int ara[10]={10,20,30,40,50,60,70,80,90,100};
    int a,b,c,v;
    for(a=9,b=0;a>=0,b<10;a--,b++)
    {
    c=ara[a];
    ara[a]=ara[b];
    ara[b]=c;
    }
    for(v=0;v<10;v++)
    {
        printf("%d\n",ara[v]);
    }
    return 0;
}
