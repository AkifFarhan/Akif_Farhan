#include <bits/stdc++.h>
using namespace std ;
int main (){
    long long int i,n,x,ans=0 ;
    string s;
    cin>>n;
    cin>>s;
    for( i=0;i<n;i++){
         x = s[i]-'0' ;
        if(x%2==0){
            ans = ans + (i+1);
        }
    }
    cout << ans << endl;

return 0 ;
}
