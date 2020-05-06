#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;
int main()
{
    int ar[]={5,3,1,2,4};
    list<int>l(ar,ar+5);

    list<int>::iterator it;

    l.clear();
    for(it = l.begin() ;it!= l.end();it++)
    {
        cout<<*it<<"\t";
    }
}
