#include<bits/stdc++.h>
using namespace std;
#define N 1000001

bool flag[N];

vector<int> primes;

double eps=1e-6;

void sieve()
{
    int i, j;

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
    int n;
    while(cin>>n && n)
    {
        int pow , res = 1;
        double logn = log(n);

        pow=(int)(logn/log(2)+eps)-(int)(logn/log(5)+eps);
        while(pow--)
        {
            res *= 2;
            res %= 10;
        }

        pow=logn/log(3)+eps;
        while(pow--)
        {
            res*=3;
            res%=10;
        }

        for(int i=3 ; i<primes.size() && primes[i]<=n ; i++)
        {
            int pow=logn/log(primes[i])+eps;
            while(pow--)
            {
                res*=primes[i];
                res%=10;
            }
        }

        cout<<res<<endl;
    }
}
