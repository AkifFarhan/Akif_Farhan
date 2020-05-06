#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin>>x;
    int n,a,b,c,s=0;
    n=x.size();
    for(a=0;a<n-2;a++)
    {
        for(b=a+1;b<n-1;b++)
        {
            for(c=b+1;c<n;c++)
            {
                if( x[a]=='Q' && x[b]=='A' && x[c]=='Q' )
                   s++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
