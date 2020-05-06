#include<stdio.h>
int main()
{
    char a,b;

    a=3;
    b= ~a;
    printf("a=%d\nb=%d\n",a,b);
    a=1;
    b=~a;
    printf("a=%d\nb=%d",a,b);
    return 0;
}
