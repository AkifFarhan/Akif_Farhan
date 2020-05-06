#include<bits/stdc++.h>
int main()
{
    char c='A';
    char *p , **q;

    p=&c;
    q=&p;

    printf("value of c: %c\n",c);
    printf("value of c: %c\n",*p);
    printf("Value of c: %c\n",**q);

    return 0;
}
