#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int p=1;p<=t;p++)
    {
        unsigned long long a;
        long long i,sqrta,n,m;
        int z=0;

        cin>>a;

        sqrta=sqrt(a);

        if(a%2!=0)
            cout<<"Case "<<p<<": Impossible"<<endl;
        else
        {
            for(i=2 ; i<=sqrta ; i+=2)
            {
                m=i;
                n=a/m;
                if( n*m==a && n%2==1 )
                {
                    cout<<"Case "<<p<<": "<<n<<" "<<m<<endl;
                    z=1;
                    break;
                }
            }

            if(z==0)
            {
                for(i=sqrta ; i>0 ; i-=2)
                {
                    if(i%2==0)
                        i--;

                        n=i;
                        m=a/n;

                    if( n*m==a && n%2==1 )
                    {
                       cout<<"Case "<<p<<": "<<n<<" "<<m<<endl;
                        z=1;
                        break;
                    }
                }
            }
            else if(z==0)
                cout<<"Case "<<p<<": Impossible"<<endl;
        }
    }
}
