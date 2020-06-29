#include<bits/stdc++.h>
using namespace std;

char c[100000],c1[100000];
int i;

void strcat(int j,int k)
{
    if(k==0)
        c[j]=' ';
    if(k==i)
      return;
    c[j+1]=c1[k];
    strcat(j+1,k+1);
}

int main()
{
    gets(c);
    gets(c1);
    i=strlen(c1);

    strcat(strlen(c),0);

    puts(c);
}
