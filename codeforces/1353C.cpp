#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i;
    cin>>t;
    while(t--)
    {
        long long n,ans=0;
		cin >> n;

		for (i = 1; i <= n / 2; i++)
			ans += i*i ;

		cout <<ans*8<<endl;
    }
}
