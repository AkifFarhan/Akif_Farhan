#include<bits/stdc++.h>
int x=1;

void myfnc(int y)
{
    y=y*2;
    x=x+10;
    printf("myfnc,x=%d,y=%d\n",x,y);
}
int main()
{
    int y=5;
    x=10;
    printf("main,x=%d,y=%d\n",x,y);
    myfnc(y);
    printf("main1,x=%d,y=%d\n",x,y);
    return 0;
}
