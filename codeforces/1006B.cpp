#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    vector<int>indx;
    int n,k;
    cin>>n>>k;
    int a[k];
    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        v.push_back({p,i});
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=n-k;i<n;i++)
    {
        sum+=v[i].first;
        indx.push_back(v[i].second);
    }
    cout<<sum<<endl;
    sort(indx.begin(),indx.end());
    for(int i=1;i<k;i++)
        cout<<indx[i]-indx[i-1];
    cout<<n-indx[k-1];



}

