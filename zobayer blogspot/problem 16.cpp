#include<bits/stdc++.h>
using namespace std;

string i;

void rec(int l)
{
    if(l<0)
        return;
    cout<<i[l];
    rec(l-1);
}
string call(string s)
{
    if(s.empty())
        return "";
    cout<<s.back()<<endl;
    return s.back() + call(s.substr(0, s.size()-1));
}

int main()
{
//    cin>>i;
//    int l=i.length();
//    rec(l-1);
    string s;
    cin >> s;
    cout << call(s);
}
