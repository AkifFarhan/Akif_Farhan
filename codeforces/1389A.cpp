#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        if(2*l > r)
            cout<<"-1 -1"<<endl;
        else
            cout<< l << " " << l*2 <<endl;
    }
}
