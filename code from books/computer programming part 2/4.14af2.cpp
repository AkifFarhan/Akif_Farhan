#include <bits/stdc++.h>
using namespace std;
void reverse(int k)
{
    if(k==0)
        return ;
    reverse(k-1);
    cout<<s[k];
}
int main()
{
    string a = "akif";
    k=a.size();
    reverse(a);
    return 0;
}
