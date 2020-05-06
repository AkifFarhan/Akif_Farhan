#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k=0;
    cin>>n;
    while(n!=0)
    {
        if(n%2==1)
            k++;
        n/=2;
    }
    cout<<k<<endl;
}
