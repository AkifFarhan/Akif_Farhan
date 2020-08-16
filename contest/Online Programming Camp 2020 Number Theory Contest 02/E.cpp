#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 40000000
vector<ll>primes;
bool flag[N];

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
    ll i,j,n,count;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        for(i=0;;i++)
        {
            if(n<=1)
                break;
            else if(i==primes.size())
            {
                cout<<n<<"^1";
                break;
            }

            count=0;
            while(n%primes[i]==0)
            {
                count++;
                n/=primes[i];
            }

          if(count>0)
            cout<<primes[i]<<"^"<<count<<" ";
        }
        cout<<endl;
    }
}
