#include<bits/stdc++.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("Value of X : %d\n",x);
    *p=20;
    printf("Value of X : %d\n",*p);
    printf("Address of x: %p\n",&x);
    printf("value of p : %p\n",p);

    return 0;
}
