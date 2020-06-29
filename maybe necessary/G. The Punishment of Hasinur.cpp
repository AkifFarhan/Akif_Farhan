#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    vector<string>s;
    string z;
    cin>>t;
    while(t--)
    {
        cin>>z;
        push_back(z);
    }

    int l;
    cin>>l;
    while(l--)
    {
        cin>>z;
        int len = z.size();
        for(int k=0;k<t;k++)
         {
             string m;
            strcpy(m, s[k]);
             int b=0;
             for(int j=0;j<len;j++)
                if(z[j]==m[j]) b++;

            if(b==len)
            {
                cout<<m<<endl;
                break;
            }
            b=0;
         }
    }
}
