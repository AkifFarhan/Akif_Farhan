#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0 ,i;
    cin>>n;

    while(n)
    {
        if(n&1)
            count++;
            n=n>>1;
    }
    cout<<"number of 1 :"<<count;
    return 0;


}
