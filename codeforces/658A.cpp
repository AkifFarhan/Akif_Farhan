#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int i,n,c,p[100],t[100],a=0,b=0;
    cin>>n>>c;
    for(i=0;i<n;i++)
        cin >> p[i] ;
    for(i=0;i<n;i++)
        cin >> t[i] ;
    int  tt = 0 ;
    for(i=0;i<n;i++)
    {
        tt += t[i] ;
        a += max(0,p[i]-c*tt) ;
    }
    tt = 0;
    for(i=n-1;i>-1;i--)
    {
        tt += t[i];
        b += max(0,p[i]-c*tt);
    }
    if(a==b)
        cout << "Tie"<<endl ;
    else if( a > b )
        cout << "Limak" <<endl;
    else
        cout << "Radewoosh" <<endl;
    return 0 ;
}
