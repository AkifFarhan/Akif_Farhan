#include<bits/stdc++.h>
using namespace std;

int main()
{
    string bs  = "abacaba";
    int t;
    cin>>t;
    while(t--)
    {
       int n,i,j,v=0;
       string ms;
       cin>>n>>ms;

       int k=1;
       for ( i=0; i+6<n; i++)
        {
            string s = ms;
            for ( j=0; j<7; j++)
                if (s[i+j] == '?')
                    s[i+j] = bs[j];

            for ( j=0; j<n; j++)
                if (s[j] == '?')
                    s[j] = 'z';

           int cnt = 0;
           for ( j=0; j+6<n; j++)
           {
                string sub = string(s.begin()+j, s.begin()+j+7);
                if (sub == bs)
                  cnt++;
           }

           if(cnt == 1)
           {
            v=1;
             cout<<"Yes"<<endl<<s<<endl;
             break;
           }
        }

        if(v==0)
            cout<<"No"<<endl;
    }
}
