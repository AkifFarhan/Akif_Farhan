#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,ans=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n-2;i++)
        {
            for(j=i+2;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    ans=1;
                    break;
                }
            }
            if(ans==1)
                break;
        }

        if(ans==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
