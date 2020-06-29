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

        if(s.back()=='0')
            cout<<'0'<<endl;

        else if(s.back()=='1')
            cout<<'1'<<endl;

        else if(s.back()=='2')
            cout<<'4'<<endl;

        else if(s.back()=='3')
            cout<<'9'<<endl;

        else if(s.back()=='4')
            cout<<'6'<<endl;

        else if(s.back()=='5')
            cout<<'5'<<endl;

        else if(s.back()=='6')
            cout<<'6'<<endl;

        else if(s.back()=='7')
            cout<<'9'<<endl;

        else if(s.back()=='8')
            cout<<'4'<<endl;

        else if(s.back()=='9')
            cout<<'1'<<endl;
    }
}
