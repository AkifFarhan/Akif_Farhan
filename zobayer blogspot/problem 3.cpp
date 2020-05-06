#include<bits/stdc++.h>
using namespace std;

int i=0;

void remove_odds(int a[],int n)
{
    if(n!=0)
    {
        int k;
        cin>>k;
        if(k%2==0)
        {
            a[i]=k;
            i++;
        }
        remove_odds(a,n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    remove_odds(a,n);
    for(int j=0;j<i;j++)
        cout<<a[j]<<" ";
}
