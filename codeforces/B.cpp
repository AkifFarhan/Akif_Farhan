#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,y=1,z=1;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[n-1]-a[0]<<" ";
    if(n==2)
        cout<<"1";
    else
    {
       for(int i=n-2;i>-1;i--)
       {
            if(a[i]==a[i+1])
                y++;
            else
                break;
       }
       for(int i=1;i<n;i++)
       {
           if(a[i-1]==a[i])
               z++;
           else
            break;
       }
       if(a[n-1]==a[0])
        cout<< n * (n - 1) / 2;
       else
        cout<<y*z;
    }
}
