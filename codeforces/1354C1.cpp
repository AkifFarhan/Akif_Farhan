#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        n*=2;

        double f = 1/(tan(pi/n));;

        printf("%0.9f\n",f);
    }
}
