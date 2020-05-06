#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    while(m--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        int pos=0;

        for(int i=l-1;i<r;i++)
        {
            if(a[i]<a[x-1])
                pos++;
        }
        if(l+pos==x)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
