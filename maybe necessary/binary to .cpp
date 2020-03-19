#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char b[65];
    int len,d,p,i;
    cin>>b;
    d=0;
    len=strlen(b);
    p=len-1;
    for(i=0;i<len;i++)
    {
        d+=(b[i]-'0')*pow(2,p);
        p--;
    }
    cout<<d;
    return 0;
}
