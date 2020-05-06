#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=1;
    cin>>n;
    int a[n],b[3];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    k=a[0];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        if(k!=a[i])
        {
            c++;
            k=a[i];
            if(c==4)
                break;
            b[c-1]=a[i];
        }
    }
    if(c<3)
        cout<<"YES";
    else if(c>3)
        cout<<"NO";
    else
    {
        if(b[1]-b[0]==b[2]-b[1])
            cout<<"YES";
        else
            cout<<"NO";
    }
}
