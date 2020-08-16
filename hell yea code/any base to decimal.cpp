#include<bits/stdc++.h>
using namespace std;

int decimal(string s,int n)
{
    int i , j , k , power=1 , ans=0 ;
    int len = s.size();
    for( i=len-1,j=0; i>=0 ; i--,j++)
    {

        if( s[i] >= '0' && s[i]<='9' )
            k = s[i]-'0';
        else
            k = s[i]-'A'+10;


        ans += k * power;
        power*=n;

    }
    return ans;
}

int main()
{
    cout<<"enter string :";
    string s;
    cin>>s;
    cout<<"enter current base :"<<endl;
    int n;
    cin>>n;
    cout<<"decimal of "<<s<<" is "<<decimal(s,n);

}
