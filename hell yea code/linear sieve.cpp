#include<bits/stdc++.h>
using namespace std;

#define N 200

vector<int>primes;
bool flag[N];


void linsieve()
{
    int i,j;
    for(i=2;i<N;i++)
    {
        if(!flag[i])
            primes.push_back(i);

        for( j=0 ; i*primes[j]<N ; j++ )
        {
            flag[i*primes[j]] = 1;

            if(i % primes[j]==0)
            break;

        }
    }
}

int main()
{
    linsieve();

    for(int i=0;i<primes.size();i++)
    {
        cout<<primes[i]<<" ";
    }
}
