#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,j,l=0;
                cin>>n>>a>>b;
        char c='a';

        for(j=0;j<n;j++,c++)
        {
            cout<<c;
            l++;
            if(l==b)
            {
                c='a'-1;
                l=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
