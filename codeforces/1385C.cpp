#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n],m=0,f=1,i;

        for(i=0;i<n;i++)
            cin>>a[i];

        for( i=n-1 ; i>0 ; i-- )
        {

            //cout<<"i  "<<i<<endl;

            if(a[i-1] > a[i] && m==0)
                f++;
            else if(m==0 && a[i-1] != a[i])
                m++;


            if( m==1 && a[i-1] < a[i] )
                f++;
            else if ( m==1 && a[i-1] != a[i] )
                m++;

            if(a[i-1] == a[i])
                f++;

            if(m==2)
                break;
        }

       cout<<(n-f)<<endl;
    }
}
