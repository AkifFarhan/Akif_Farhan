#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>s;
     s.push("akif");
     s.push("kanti");
     s.push("kobutor");

     while(!s.empty())
     {
        cout<<s.top()<<endl;
        s.pop();
     }
     return 0;
}
