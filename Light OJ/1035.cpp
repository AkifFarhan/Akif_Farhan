#include<bits/stdc++.h>
using namespace std;

vector<int>primes;

void pri()
{

	int a[102];
	memset(a, 0, sizeof(a));

	for (int i = 2; i <= 101; i++)
    {

		if(a[i] == 0)
		{
			primes.push_back(i);
			for (int j = 2 * i; j <= 100; j = j + i)
			{
				a[j] = 1;
			}
		}
	}
}

int main()
{

   pri();

    int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {
        int n,i,j,k,count;
        cin>>n;

        cout<<"Case "<<l<<": "<<n<<" = ";

        for( i =0 ;primes[i]<=n  ; i++)
        {
            count = 0;

            for(j=2;j<=n;j++)
            {
                k=j;
                while(k%primes[i]==0)
                {
                    count++;
                    k/=primes[i];
                }
            }
             cout<<primes[i]<<" ("<<count<<")";
             if(primes[i+1]<=n)
                cout<<" * ";
        }
        cout<<endl;
    }
}
