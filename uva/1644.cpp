#include<bits/stdc++.h>
using namespace std;

int N=1300000;
bool A[100000005];

void seive()
{
    for(int i = 1; i <=N; i++)
        A[i] = true;

    for(int i = 3; i*i <=N ; i+=2)
    {
        if (A[i] == true)
        {
            for (int j = i * i; j <=N; j+= i+i)
            {
                A[j] = false;
            }
        }
    }
}

int is_prime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;
    return A[n];
}



int main()
{

    seive();

    int z;

    while(1)
    {
        cin>>z;
      if(z==0)
        break;

        if(is_prime(z)== true)
        {
            cout<<"0"<<endl;
            continue;
        }

        int count=0;

        for(int i=z;;i++)
        {
            if(is_prime(i)== false)
                count++;
            else
                break;
        }

        for(int i=z-1;;i--)
        {
            if(is_prime(i)== false)
                count++;
            else
                break;
        }

        cout<<count+1<<endl;
    }
}
