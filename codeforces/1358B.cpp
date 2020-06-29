#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i , a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        for(i=n-1 ; i!=-1 ; i-- )
        {
            if(i+1 >= a[i])
            {
                cout<< i+2 <<endl;
                break;
            }
            if(i==0)
            {
                cout<< i+1 <<endl;
            }
        }
    }
}
