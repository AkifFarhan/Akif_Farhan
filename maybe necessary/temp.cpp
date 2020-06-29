#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if(x2<x1)
        swap(x1,x2);
        long long int ans = ((x2-x1)/2) + x1;

       cout<<ans;

       if((x2-x1) % 2 == 1)
        cout<<".5 ";
        else
            cout<<" ";
       cout<<y1<<endl;
    }
}

