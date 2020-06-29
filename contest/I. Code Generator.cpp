#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[500005];
    int n;
    cin>>n;
    cin>>a;
    int i,j=0,ans=0;
    for(i=0;i<n;i++)
    {
        //cout<<a<<endl;

        if(j==0 && a[i]=='c')
        {
            a[i]='1';
            j++;
        }
        else if(j==1 && a[i]=='o')
        {
            a[i]='1';
            j++;
        }

         else if(j==2 && a[i]=='d')
        {
            a[i]='1';
            j++;

        }

        else if(j==3 && a[i]=='e')
        {
            a[i]='1';
            j++;
        }
        if(j==4)
        {
            ans++;
            j=0;
            i=0;
        }
    }
    cout<<ans;
}
