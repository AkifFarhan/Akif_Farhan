#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int >v;

    vector<int>::iterator it;

    for(int i=1;i<=5;i++)
        v.push_back(i);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
    cout<<endl;
}
