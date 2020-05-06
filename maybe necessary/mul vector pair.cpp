#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    vector<pair<int,int>>r;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p1,p2;
        cin>>p1>>p2;
        v.push_back({p1,p2});
    }
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=v[i].first*v[i].second;

    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[j].first*v[j].second==a[i])
            {
                cout<<v[j].first<<" "<<v[j].second<<endl;
                v[j].first=-1;
                break;
            }
        }
    }
}
