#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=2;
    float d;
while(1)
{
    scanf("%f",&d);
        if(d==0.00)
            break;
    float sum=0;
    i=2;
    for(;;i++)
    {
        float k;
        k=1/i;
        sum+=k;
        if(d<=sum)
        {
            cout<<i-1<<endl;;
            break;
        }
    }
}
}
