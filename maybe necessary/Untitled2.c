#include<stdio.h>
int main()
{
    char s1[]="bangla",s2[]="desh",s3[12];
    int i,j,z1=6,z2=4;
    for(i=0,j=0;i<z1;i++,j++)
    {
        s3[j]=s1[i];
    }
    for(i=0;i<z2;i++,j++)
    {
        s3[j]=s2[i];
    }
    s3[j]='\0';
    printf("%s",s3);
    return 0;
}
