#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        a[i]=b[i];
    }
    for(int i=1;i<n;i++)
        a[i]+=a[i-1];

    sort (b,b+n);
    for(int i=1;i<n;i++)
        b[i]+=b[i-1];

    long long q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        long long l,r;
        cin>>l>>r;
        if(type==1)
        {
            if(l==1)
                cout<<a[r-1]<<endl;
            else
               cout<<(a[r-1]-a[l-2])<<endl;
        }
        else if(type==2)
        {
            if(l==1)
                cout<<b[r-1]<<endl;
            else
                cout<<(b[r-1]-b[l-2])<<endl;
        }
    }
    return 0;
}
