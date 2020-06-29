#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		set<int>r,c;

		for(int i=0;i<n;i++)
        {

		   for(int j=0;j<m;j++)
		   {

			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				r.insert(i);
                c.insert(j);
			}
		   }
        }

		int a=n-r.size();
		int b=m-c.size();

		int z=min(a,b);

		if(z%2)
            cout<<"Ashish"<<endl;
		else
		 cout<<"Vivek"<<endl;

	}
}
