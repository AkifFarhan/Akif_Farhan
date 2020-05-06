#include<bits/stdc++.h>
//#include<set>
using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(10);
    s.insert(9);
    s.insert(5);
    s.insert(14);
    s.insert(5);
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
