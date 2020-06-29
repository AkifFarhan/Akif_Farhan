#include<bits/stdc++.h>
using namespace std;

int a[10000];
int n;

int rec(int m)
{
     if(m==n)
        return a[n];

    if(a[m]>a[n])
        a[n]=a[m];

//    //cout<<a[n];
//    cout<<"m "<<m<<" n "<<n<<endl;

    rec(m+1);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    a[n]=a[0];

   cout<<rec(1);
}
