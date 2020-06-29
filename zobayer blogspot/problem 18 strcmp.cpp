#include<bits/stdc++.h>
using namespace std;

char c1[100000],c2[100000];

int strcmp(int i)
{
    if(i<0)
        return 1;

    if(c1[i]!=c2[i])
        return 0;
    strcmp(i-1);
}

int main()
{
    cin>>c1;
    cin>>c2;
    int i=strlen(c1),j=strlen(c2);
    int k;
    if(i!=j)
        cout<<"not same";
    else
    {
        k=strcmp(i);
        if(k==1)
            cout<<"same";
        else
         cout<<"not same";
    }
}
