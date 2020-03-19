#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int i,j,a=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a=a+ara[i][j];
        }
        printf("sum of row %d : %d\n",i+1,a);
        a=0;
    }
    int b=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            b=b+ara[j][i];
        }
        printf("sum of column %d : %d\n",i+1,b);
        b=0;
    }
    return 0;
}
