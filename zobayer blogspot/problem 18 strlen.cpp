 #include<bits/stdc++.h>
using namespace std;

char c[100000];

int strlen(int i)
{
    if(c[i]!='\0')
        i++;
    else
        return i;
    strlen(i);
}

int main()
{


     int i;
     gets(c);
     i=strlen(0);
     cout<<i;
     return 0;
}
