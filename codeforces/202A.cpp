#include<bits/stdc++.h>
using namespace std;
int main()
{
    char k,s[10];
    int l=0;
    cin>>s;
    k=s[0];
    for(int i=0;i<10;i++)
    {
        if (k<=s[i])
            k=s[i];
    }
    cout<<k;

    return 0;
}
