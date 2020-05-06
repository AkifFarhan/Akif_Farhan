#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={8, 2, 4, 1, 5}, cnt = 0;
    int n = sizeof(a)/sizeof(a[0]);
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            cout << ++cnt << ": ";
            for(k=0;k<n;k++)
                cout<<a[k]<<" ";
            cout << endl;
            if(a[i]>a[j])
                swap(a[i], a[j]);
        }
    }
    return 0;
}
