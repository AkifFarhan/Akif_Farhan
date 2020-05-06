#include<bits/stdc++.h>
int main()
{
    int x=20;
    int *p;

    printf("Va;ue of x : %d\n",x);

    p=&x;
    *p=20;

    printf("Value of x: %d \n",x);

    x=15;

    printf("Value of x: %d \n ",x);
    printf ("Value stored at location %p is %d \n",p,*p);

    printf("address of %p is %d\n ",&x);
    printf("value of p is %p",p);

    return 0;
}
