#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    for(i=0;i<=j;i++)
    {
        int a,b;
        char z;
        scanf("%d %c %d",&a,&z,&b);
        if(z=='+')
            {
                printf("%d %c %d = %d",a,z,b,a+b);
            }
             else if(z=='-')
            {
                printf("%d %c %d = %d",a,z,b,a-b);
            }
       else if(z=='*')
            {
                printf("%d %c %d = %d",a,z,b,a*b);
            }
        else if(z=='/')
            {
                printf("%d %c %d = %d",a,z,b,a/b);
            }

    }
}
