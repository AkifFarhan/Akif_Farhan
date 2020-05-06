#include<bits/stdc++.h>
void see(int count)
{
    if(count>5)
    {
        return ;
    }
    printf("count=%d\n",count);
    see(count+1);
}
int main()
{
    see(1);
    return 0;
}
