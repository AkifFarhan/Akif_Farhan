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

        int a[n];

        int e=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i] % 2 == 0)
                e++;
        }

        if(e%2==0)
            cout<<"YES"<<endl;
        else
        {
            sort(a,a+n);

            for(int i=1;i<n;i++)
            {

                if( a[i]-a[i-1] == 1 )
                   {
                       cout<<"YES"<<endl;
                       break;
                   }
               if(i==n-1)
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
