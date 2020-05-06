#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int ara[]={1,2,3,5,6,7,8,9,10};
    for(i=1;i<=10;i++)
    {
        for(j=0;j<10;j++)
        {
           // printf("%d ^ %d = %d\n",i,ara[j],i^ara[j]);
            if((i^ara[j])==0)
                break;
            if(j==9)
                cout<<i;
        }
    }
    return 0;
}
