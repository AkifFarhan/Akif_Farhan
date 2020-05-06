#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
         bool f = true;
        for(int i = 0; i < s.size(); i++)
            {
            if(s[i] != s[0])
            {
                f = false;
            }
           }
        if(f) cout << s << endl;
        else
        {
            for(int i=0;i<2*s.size();i=i+2)
            {
                cout<<"0";
                cout<<"1";
            }
            cout<<endl;
        }

    }
    return 0;
}
