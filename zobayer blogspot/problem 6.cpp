#include<bits/stdc++.h>
using namespace std;

int k=1;

void rotten(int n)
{
    if(n==0)
        return;
    k*=n;
    rotten(n-1);

}

int main()
{
    int n;
    cin>>n;
    rotten(n);
    cout<<k;
}
