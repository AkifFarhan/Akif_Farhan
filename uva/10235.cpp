#include<bits/stdc++.h>
using namespace std;

#define ll long long
int is_prime(ll n)
{

    if(n==1)
        return 0;

    ll sqr = sqrt(n);
    for(ll i=2 ; i<=sqr ; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int reverse(ll n)
{
    ll r=0;
    while(n>0)
    {
      r = r*10 + n%10;
      n /= 10;
    }
    return r;
}

int main()
{
    ll n;
    while(cin>>n)
    {
        if(is_prime(n) == 1)
        {
            ll z = reverse(n);
            if(z==n)
                cout<<n<<" is prime."<<endl;
            else if(is_prime(z) == 1)
                cout<<n<<" is emirp."<<endl;
            else
                cout<<n<<" is prime."<<endl;
        }
        else
          cout<<n<<" is not prime."<<endl;
    }
}
