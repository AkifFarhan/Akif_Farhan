#include<bits/stdc++.h>
using namespace std;

int a[100000];
int n,z;

void rec(int i)
{
    if(i==n)
    {
        cout<<"NOT FOUND"<<endl;
        return;
    }

    if(a[i]==z)
       {
        cout<<i<<endl;
        return;
       }
    rec(i+1);
}

int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    int q;
    cin>>q;
    while(q--)
    {
        cin>>z;

        int i=0;
        rec(i);
    }
}
