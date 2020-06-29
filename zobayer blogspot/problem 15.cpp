#include<bits/stdc++.h>
using namespace std;

int rec(int n,int ans)
{
    ans=ans*10+n%10;
     if(n/10==0)
      return ans;
    rec(n/10,ans);
}

int call(int n)
{
    if(n/10 == 0)
        return n;
    cout << n << " " << (n%10) * pow(10, (int)log10(n)) << endl;
    return (n%10) * pow(10, (int)log10(n)) + call(n/10);
}

int main()
{
    int n;
    cin>>n;
//    cout<<rec(n,0);
    cout << call(n);
}
