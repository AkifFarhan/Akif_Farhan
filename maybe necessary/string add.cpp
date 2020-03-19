#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]="bangla",s2[]="desh";
    char s[10];
    int i,t;
    for(i=0;i<6;i++)
        s[i]=s1[i];
    for(i=6;i<10;i++)
        s[i]=s2[i-6];
        s[i]='\0';
    printf("%s",s);
    return 0;

}
