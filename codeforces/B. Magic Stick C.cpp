#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int x,y;
        cin>>x;
        cin>>y;
        if(x==y)
            cout<<"YES";
        else if(x%2==0&&x<=1)
        {
            x=(3*x)/2;
            if(x==y)
                cout<<"YES";
                else
                    cout<<"NO";
        }
        else if (x>1&&x%2!=0)
        {
            x=x-1;
            if(x==y)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else if(x>1&&x%2==0)
        {
            if((x*3)/2==y||x-1==y)
            cout<<"YES";
            else
            cout<<"NO";
        }
    }
    return 0;
}
