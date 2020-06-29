#include<bits/stdc++.h>
using namespace std;

int arr[1001];

void factor()
{
    int i,j;
    for(i=1 ; i<=1000 ; i++)
    {
        int sum=0;
        for(j=1;j<=i;j++)
        {
            if(i%j == 0)
                sum+=j;
        }
        arr[i]=sum;
    }
}

int main()
{
    factor();
    for(int z=1;;z++)
    {
        int n,i;
        cin>>n;
        if(n==0)
            break;

        for(i=1001;i>=1;i--)
        {
            if(arr[i] == n)
            {
                cout<<"Case "<<z<<": "<<i<<endl;
                break;
            }
        }
        if(i==0)
        {
          cout<<"Case "<<z<<": "<<"-1"<<endl;
        }
    }
}
