#include <bits/stdc++.h>
using namespace std;


int n;
bool A[100];

int is_prime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;
    return A[n];
}

void seive()
{
    for(int i = 3; i*i <=n ; i+=2)
    {
        if (A[i] == true)
        {
            for (int j = i * i; j <=n; j+= i+i)
            {
                A[j] = false;
            }
        }
    }
}
int main()
{
    cout << "Enter a number: " << endl;
    cin >> n;

    for(int i = 1; i <=n; i++)
        A[i] = true;

    seive();

    cout << "The prime numbers below " << n << " are: " << endl;

    for(int i = 1; i <=n; i++)
    {

        if (is_prime(i) == true)
        {
            cout << i << " ";
        }
    }

    cout << endl;


    return 0;
}


