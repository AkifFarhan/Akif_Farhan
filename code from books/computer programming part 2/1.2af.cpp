#include<bits/stdc++.h>
using namespace std;
int search_char(char a)
{
    if(a>=48 && a<=57)
        return 1;
    else
        return 0;
}
int main()
{
    char a;
    int k;
    cin>>a;
    k=search_char(a);
    if(k==0)
        cout<<"not number"<<endl;
    else
        cout<<"number"<<endl;
    return 0;
}
