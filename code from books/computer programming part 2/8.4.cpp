#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int a;
    time_t t;
    srand((unsigned)time(&t));

    for(int i = 0;i<5;i++)
    {
        a=rand();
        if(a>=0 && a<=100)
        {
           printf("%d\n",a);
        }
        else
            i--;
    }
    return 0;
}
