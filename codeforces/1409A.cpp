#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            swap(a,b);

        int n = (b-a)/10;
        if( n*10 < b-a)
            n++;
        cout<<n<<endl;
    }
}
