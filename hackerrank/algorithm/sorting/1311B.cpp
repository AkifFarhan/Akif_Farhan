#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int a[n], p[m];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<m; i++)
            cin>>p[i];
        sort(p, p+m);
        while(1)
        {
            int f=0;
            for(int i=0; i<m; i++)
            {
                int x=p[i];
                if(a[x-1]>a[x])
                    {
                        swap(a[x-1], a[x]);
                        f=1;
                    }
            }
            if(f==0)
                break;
        }
        int r=1;
        for(int i=0; i<n-1; i++)
            if(a[i]>a[i+1])
             {
                 r=0;
                 break;
             }
        if(r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
