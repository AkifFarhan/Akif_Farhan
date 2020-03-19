#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    char a[26];
    for(t=0,i='A';i<='Z';i++,t++)
    {
        a[t]=i;
    }
    for(i=0;i<=25;i++)
        cout<<a[i]<<" ";
    return 0;
}
