#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;

    int start=3,end=sqrt(n)+1;

    while (start <= end)
    {
        if (n % start == 0)
            return 0;
        start +=2;
    }
    return  1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        for(;a<=b;a++)
        {
            if(check(a)==1)
                cout<<a<<endl;
        }
    }
}
