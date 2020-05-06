#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
bool cmp(ii a,ii b)
{
    int as=a.first*a.second,bs=b.first*b.second;
    if(as!=bs)
        return as<bs;
    return a.first<b.first;
}
int main()
{
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p1,p2;
        cin>>p1>>p2;
        v.push_back({p1,p2});
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
