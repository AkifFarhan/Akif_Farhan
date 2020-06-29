#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;

        int i , z=0 , w=0 , f=0 ,k=0;

        for(i=0 ; i < n*m ; i++)
        {
            char c;
            cin>>c;
            k++;

            if(c=='.')
                z++;

           if(c == '.')
            f++;

            if(c == '*')
                f=0;

           if(f==2)
            {
                w++;
                f=0;
            }

            if(k==m)
            {
                f=0;
                k=0;
            }
        }

       if(x*2 < y)
        cout<< (z*x) <<endl;
       else
        cout<< (x*(z-(w*2)) + y *w) <<endl;
    }
}
