#include<bits/stdc++.h>
using namespace std;
int call=0;

int factorial(int n)
{
        call++;

    if(n==0)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("undefined\n");
        return 0;
    }
    printf("Factorial of %d is %d\n",n,factorial(n));
    cout<<call;
    return 0;
}
