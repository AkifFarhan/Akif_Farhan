#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,3,2,5,4,8,9,10};
    auto it =upper_bound(v.begin(),v.end(),5);

    cout<<it-v.begin();
    return 0;
}
