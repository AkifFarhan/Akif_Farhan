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
		int ans = int(1e9);
		int n = s.size();

		vector<pair<char, int> > c;
		for(auto x : s)
		{
			if(c.empty() || c.back().first != x)
				c.push_back(make_pair(x, 1));
			else
				c.back().second++;
//				cout<<c.back().first<<" "<<c.back().second<<endl;
				//cout<<c.size()<<endl;
		}

		cout<<endl<<endl;
		for(auto it=c.begin();it<c.end();it++)
            cout<<it->first<<" "<<it->second<<endl;

		int m = c.size();
		for(int i = 1; i < m - 1; i++)
        {
			if(c[i - 1].first != c[i + 1].first)
				ans = min(ans, c[i].second + 2);
        }
		if(ans > n)
			ans = 0;
		printf("%d\n", ans);
	}
}
