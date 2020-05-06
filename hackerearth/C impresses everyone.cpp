#include<bits/stdc++.h>
#define faster cin.tie(0);ios_base::sync_with_stdio(0)
using namespace std;
int main()
{
    faster;
    int n,b,j,z;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int k=n-1;
        int j=a[k];
        cin>>z;
        while(1)
        {
            if(z<=j)
            {
                cout<<(k%2==0?"A":"B")<<endl;
                break;
            }
            else
            {
                k--;
                j+=a[k];
            }
        }
    }
    return 0;
}
