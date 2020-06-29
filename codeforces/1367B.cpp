#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int odd=0,even=0;
        int wrong=0;
        for( i = 0 ; i<n ; i++)
        {
            int z;
            cin>>z;

            if(z%2==0)
                even++;
            else
              odd++;

            if(z%2 != i%2)
                wrong++;
        }

        if(n/2 == odd)
        {
            cout<<((wrong+1)/2)<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
