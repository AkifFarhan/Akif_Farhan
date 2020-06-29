#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=1,f,h0=0,h1=0;
        cin>>n;
        int a[n];
        a[0]=0;
        for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if( a[i] < a[i - 1])
				s = 0;
		}

		for(int i=0;i<n;i++)
        {
            cin>>f;
            if(f==0)
                h0=1;
            if(f==1)
                h1=1;
        }

        //cout<<h1<<"   "<<h0<<endl;
        if(s==1)
            cout<<"Yes"<<endl;
        else if(h1==1 && h0==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
