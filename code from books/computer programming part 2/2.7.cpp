#include<bits/stdc++.h>
int main()
{
    int x=10,y;
    int *p;
    int *q;

    p=&x;
    q=&y;
    y=*p;//*p=x=10;
    *p=15;//x=15
    *q=20;

    printf("Value of x :%d\n",x);
    printf("Value of y :%d\n",y);
    printf("Value of *p :%d\n",*p);
    printf("Value of *q :%d\n",*q);

}
