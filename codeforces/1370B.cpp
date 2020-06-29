#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,a;
        cin>>n;

        vector <int> o,e;
        for(i=0;i<n*2;i++)
        {
            cin>>a;

            if(a % 2 == 0)
                e.push_back(i+1);
            else
                o.push_back(i+1);
        }

        int k=0;
        for(i = 0; i + 1 < o.size(); i += 2)
        {
             cout << o[i] << " " << o[i+1] << endl;
            k++;
            if(k==n-1)
                break;
        }

        for(i = 0; i < e.size(); i += 2)
        {
            cout << e[i] << " " << e[i+1] << endl;
            k++;
            if(k==n-1)
                break;
        }
    }
}
