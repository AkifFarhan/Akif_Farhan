#include<bits/stdc++.h>
using namespace std;
int main()
{
    char k;
    int l=0;
    //char s[]="akif";
    char s[11];
    cin>>s;
    k=s[0];
    for(int i=0;i<strlen(s);i++)
    {
        if (k<s[i])
            k=s[i];
    }
    for(int i=0;i<strlen(s);i++)
    {
        if(k==s[i])
         l++;
    }
    for(int i=0;i<l;i++)
        cout<<k;

    return 0;
}
