#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    n=(n*(n+1))/2;
    cout<<(n%2==0?"0":"1")<<endl;
    return 0;
}
