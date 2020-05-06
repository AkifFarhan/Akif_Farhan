#include<bits/stdc++.h>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    int ar[5]={1,2,3,4,5};
    list<int>l(ar,ar+5);
    list<int>::iterator it;

    it = l.begin();
    it++;

    l.pop_front();

    for(it = l.begin();it!=l.end();it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}
