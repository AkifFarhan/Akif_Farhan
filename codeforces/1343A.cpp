#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,res;
        cin>>n;
        for(int i=2;i<30;i++)
        {
            res=pow(2,i)-1;
            if(n%res==0)
            {
                cout<<n/res<<endl;
                break;
            }
        }
    }
    return 0;
}
