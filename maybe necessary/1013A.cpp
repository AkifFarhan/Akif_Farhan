#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0,k=0,s;
    cin>>n;
    for(int i=0;i<n*2;i++)
    {
        cin>>s;
        if(i>=n)
            k+=s;
        else
             j+=s;
    }

    cout<<(j>=k?"yes":"no")<<endl;

    return 0;
}
