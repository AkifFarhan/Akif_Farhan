#include<bits/stdc++.h>
using namespace std;

int  s[3001] , f[3001],k,l;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    for (int i = 0; i < n; i++)
    {
        int j = i;
        for (int t = i; t < n; t++)
            if (a[j] > a[t])
                j = t;
        if (i != j)
            {
                s[k]=i;
                f[k]=j;
                k++;
            }
        swap(a[i], a[j]);
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<s[i]<<" "<<f[i];
        cout<<endl;
    }
     return 0;
}
