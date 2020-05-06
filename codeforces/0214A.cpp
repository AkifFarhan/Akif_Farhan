#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,k=0;
    cin>>n>>m;
    for(a=0;a<=100;a++)
    {
        for(b=0;b<=100;b++)
        {
            if(a*a+b==n&&a+b*b==m)
                k++;
        }
    }
    cout<<k<<endl;
}
