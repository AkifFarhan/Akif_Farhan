#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,e=0 ,o=0;
        cin>>n>>x;

        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i] % 2 ==0)
                e++;
            else
                o++;
        }


        if(o==0)
            cout<<"No"<<endl;

        else if(e==0 && o%2==0)
            cout<<"No"<<endl;

        else if(e==0 && o%2==1)
            cout<<"Yes"<<endl;

        else
        {
        for(i=1; i<=o ;i+=2)
        {
            if(e >= x-i)
            {
                cout<<"Yes"<<endl;
                break;
            }
        }

        if(i>o)
            cout<<"No"<<endl;
        }

    }
}
