#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;

        cin>>s;

        int k = s.size();
        int ans = int(1e9);

        vector<pair<int , int> > v;

        for(auto x : s)
        {

            if(v.empty() || v.back().first != x)
				v.push_back(make_pair(x, 1));
			else
				v.back().second++;
        }

        int n=v.size();

        for(int i=1 ; i < n-1 ; i++)
        {

            if(v[i - 1].first != v[i + 1].first)
				ans = min(ans, v[i].second + 2);

        }
        if(ans > n)
			ans = 0;
        cout<<ans<<endl;
       }

}
