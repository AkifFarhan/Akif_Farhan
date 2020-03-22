#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,i,b,k=0;
    n=s.size();
    int ara[26];
    for(i=0;i<26;i++)
        ara[i]=0;
    for(i=0;i<n;i++)
    {
        b=s[i]-'a';
        ara[b]++;
    }
    for(i=0;i<26;i++)
    {
        if(ara[i]!=0)
            k++;
    }
    if(k%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
