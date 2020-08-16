#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x2<x1)
        swap(x1,x2);
         double ans = ((x2-x1)/2) + x1;

        printf("%0.16f 0.0000000000000000\n",ans,y1);
    }
}
