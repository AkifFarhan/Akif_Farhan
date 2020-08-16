#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 40000

bool flag[N];
vector<ll> primes;

void sieve()
{
    ll i, j;

    flag[0] = flag[1] = 1;
    for(i = 4; i < N; i += 2)
        flag[i] = 1;

    for(i = 3; i * i < N; i+=2)
    {
        if(!flag[i])
        {
            for(j = i*i; j < N; j += 2*i)
                flag[j] = 1;
        }
    }

    for(i = 2; i < N; i++)
    {
        if(!flag[i])
            primes.push_back(i);
    }
}


int main()
{
    sieve();

    int t;
    cin>>t;
    while(t--)
    {
        int n,l=0;
        cin>>n;
        int i,j;
        for(i=0;i<primes.size();i++)
        {
            if(n%primes[i] == 0)
            {
                l=1;
                cout<<(n/primes[i])<<" ";
                cout<<(n - (n/primes[i]));
                break;
            }
        }
        if(l==0)
          cout<<n-1<<" "<<"1";
        cout<<endl;
    }
}
