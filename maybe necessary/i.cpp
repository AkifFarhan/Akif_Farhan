#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long double n;
        cin>>n;

        long double tri= 4*(((n-2)*(n/2))/2);
        printf("%f",tri);
        tri+=4;
        int k=(int)tri;
        n*=n;
        n-=k;
        cout<<"Case "<<i<<": "<<n<<endl;
    }
}
