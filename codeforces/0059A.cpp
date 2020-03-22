#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,l=0,u=0;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
           l++;
        if(s[i]>='A' && s[i]<='Z')
           u++;
    }
    if(l<u)
    {
      for(i=0;i<n;i++)
      {
          if(s[i]>96)
            s[i]=s[i]+'A'-'a';
      }

    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(s[i]<92)
               s[i]=s[i]+('a'-'A');
        }
    }
    cout<<s<<endl;
    return 0;
}
