#include<bits/stdc++.h>
using namespace std;

char c1[100000];
char c2[100000];

void strcpy(int i)
{
    if(i<0)
        return;
    c2[i]=c1[i];
    strcpy(i-1);
}

int main()
{
    cin>>c1;
    int i=strlen(c1);
    strcpy(i-1);

    cout<<c2;
}
