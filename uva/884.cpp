#include<bits/stdc++.h>
using namespace std;

#define N 1000007
vector<long long>primes;
bool flag[N];
int ans[1000001];

void sieve()
{
    long long i,j;

	memset(flag, 0, sizeof(flag));

	for ( i = 2; i <N; i++)
    {
		if(flag[i] == 0)
		{
			primes.push_back(i);
			for ( j = 2* i; j < N; j+= i)
				flag[j] = 1;
		}
	}
}


int func(int i)
{
    int j,k,res=0;
        for(j=0;primes[j]*primes[j]<=i;j++ )
        {
            for(k=0 ;i%primes[j]==0;k++)
                i/=primes[j];
            res+=k;
        }
        if(i>1)
            res++;

        return res;
}

int main()
{
    sieve();
    int n;
    ans[1]=0;
    for(int i=2;i<1000003;i++)
        ans[i]=ans[i-1]+func(i);

    while(cin>>n)
        cout<<ans[n]<<endl;
}
