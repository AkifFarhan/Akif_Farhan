#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=32;
    int i,count =0, num;
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(num & (1<<i))
            count++;
    }
    cout<<"number of 1 :"<<count;
    return 0;
}
