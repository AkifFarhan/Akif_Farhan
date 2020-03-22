#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i;
    cin>>i;
    while(i--)
    {
    string s;
    int a;
    cin>>s;
    a=s.size();
    if(a<=10)
        cout<<s<<endl;

    else
    {
        cout<< s[0] << a-2 << s[a-1] << endl;
    }
    }
    return 0;
}
