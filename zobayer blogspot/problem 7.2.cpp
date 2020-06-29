#include<bits/stdc++.h>
using namespace std;

long long a[100000];
long long k;
long long rec(long long i)
{
    k++;
    if(a[i]>0)
        return a[i];
    if(i<3)
        return 1;
     a[i]=rec(i-1) + rec(i-2);
     return a[i];
}

int main()
{
    long long n;
//    for(long long x = 0; x < 20; x++)
//        cout << a[x] << " ";
    cin>>n;
    n=rec(n);
    cout<<n;
    cout<<endl<<k;
}
