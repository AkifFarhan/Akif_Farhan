#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;

        cin>>n>>m>>k;

        if(n/k >= m)
            cout<<m<<endl;
        else
        {
            int j = m - n/k;

            int l = j/(k-1);

            if((k-1) * l != j)
                l++;

            cout << (n/k - l) << endl;
        }
    }
}
