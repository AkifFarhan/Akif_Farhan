#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
    cin>>n;
    if(n>0&&!(n&n-1))
    {
        printf("%d is a power of 2\n",n);
    }
    else
       printf("%d is not poewer of 2\n",n);
    }
    return 0;
}
