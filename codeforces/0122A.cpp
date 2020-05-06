#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[]={4,7,44,47,74,77,444,447,474,744,747,774,477,777},k=0;
    cin>>n;
    for(int i=0;i<13;i++)
    {
        if(n%ar[i]==0)
        {
            k=1;
            break;
        }
    }
    cout<<(k==1?"YES":"NO")<<endl;
    return 0;
}
