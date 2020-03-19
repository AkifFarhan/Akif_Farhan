#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int i;
    std::vector <int> my_v;
    my_v.push_back(10);
    my_v.push_back(20);
    my_v.push_back(30);
    my_v.push_back(40);
    cout << my_v.size()<< endl;
    for (i=0;i<my_v.size();i++)
        cout<< "vector "<< i+1 << " " << my_v[i] << endl;
}
