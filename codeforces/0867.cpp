#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,z=0;
    cin>>i;
    for(t=1;t<=i;t++)
    {
        char a;
        cin>>a;
        if(t==1&&a=='S')
        z++;
        if(t==i&&a=='F')
        z++;
    }
    if(z==2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
