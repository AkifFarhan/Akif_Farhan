#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,i;
      cin>>n;

      string s(200, 'a');
      cout<<s<<endl;

     for(i=0;i<n;i++)
     {
        int z;
        cin>>z;

        if( s[z] == 'a' )
            s[z]='b';
        else
            s[z]='a';

        //s[z]= s[z] == 'a' ? 'b' : 'a';
        cout << s << endl;
     }
    }
}
