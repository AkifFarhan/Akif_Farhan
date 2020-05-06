#include<bits/stdc++.h>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list <float>l;
    list<float>::iterator it;

    l.push_back(10);
    l.push_back(11);
    l.push_front(9);
    l.push_front(8);
    l.push_back(12);

    l.reverse();
    l.clear();

    for(it = l.begin();it!=l.end();it++)
    {
        cout<<*it<<endl;
    }

    return  0;
}
