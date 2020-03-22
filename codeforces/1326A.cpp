#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin>>i;
    while(i--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<-1;
        }
        else if(n>=2)
        {
            cout<<2;
            n=n-1;
            while(n--)
                cout<<3;
        }
        cout<<endl;
    }
    return 0;
}
