#include<stdio.h>
int main()
{
    char a[100];
    char b[100];
    char c[100];
    int i;
    scanf("%s %s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=b[i];
    }
    int s;
    for(s=0;b[s]='\0';s++)
    {
        c[i]=b[s];
        i++;
    }
    c[i]='\0';
    printf("%s",c);
    return 0;
}
