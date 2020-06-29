#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k , t = 1, i,j;
    cin>>k;
    string s("codeforces");


    vector <long long> cnt(10,1);

    for (i=0 ; t < k ; i++)
    {
        t = t / cnt[i];
        cnt[i]++;
        t *= cnt[i];

        if(i==10)
            i=0;
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<cnt[i];j++)
            cout<<s[i];
    }

    cout<<endl;
}
