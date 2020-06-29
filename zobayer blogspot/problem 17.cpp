#include<bits/stdc++.h>
using namespace std;

char s[100000],s2[100000];

void rec(int i,int l)
{
    if(l<0)
        return;
    s2[i]=s[l];
    rec(i+1,l-1);
}

int main()
{
    int i,j;

    gets(s);

    for(i=0,j=0;i<strlen(s);i++)
    {

        if(isalpha(s[i])!=0 || isdigit(s[i])!=0 )
        {
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';

    rec(0,j-1);

    int res=strcmp(s,s2);

    if(res==0)
        cout<<"palindromic";
    else
        cout<<"not palindromic";
}
