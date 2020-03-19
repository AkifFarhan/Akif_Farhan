#include<stdio.h>
int main()
{
    char s[]="aa";
    int i,h=0;
    for(i=0;s[i]!='\0';i++)
    {
        int z;
        z=s[i];
        h=h+z;
    }
     char a[]="aa";
    int d;
    for(i=0;a[i]!='\0';i++)
    {
        int z;
        z=s[i];
        d=d+z;
    }
    if(h>d)
    {
        printf("h big\n");
    }
    else if(d>h)
    {
        printf("d big\n");
    }
    else
    {
        printf("same\n");
    }
    return 0;
}
