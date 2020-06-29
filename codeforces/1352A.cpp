#include<bits/stdc++.h>
using namespace std;

int a[1000000];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j;
        int c=0,i=0,k=0;
        cin>>n;
        int z=n;

        while(z!=0)
        {
            if(z%10>0)
                c++;
            z=z/10;
        }
        cout<<c<<endl;
        while(n!=0)
        {
            if(n%10>0)
            {
                if(k==0)
                   cout<<n%10<<" ";
                else
                {

                  cout<<(n%10)*pow(10,k)<<" ";
                }
                i++;
            }
            n=n/10;
            k++;
        }
        cout<<endl;
    }
    return 0;
}
