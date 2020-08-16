#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long arr[n],r[3];
        for(long long i=0;i<n;i++)
            cin>>arr[i];


        long long g=pow(10,9)+7;

        if(n==1)
        {
            cout<<(arr[0]%g);
        }
        else if(n==2)
        {

            r[0]=(arr[0]+arr[1])/2;
            r[1]=arr[0];
            r[2]=arr[1];

            sort(r,r+3);

            if(k==3)
                cout<<((r[0]+r[1]+r[2])%g)<<endl;
            else if(k==2)
                cout<<((r[2]+r[1])%g)<<endl;
            else if(k==1)
                cout<<((r[2])%g)<<endl;
        }
    }
}
