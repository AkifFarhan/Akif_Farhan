#include<bits/stdc++.h>
void recurse(int count)
{
    if(count ==5)
    {
        return ;
    }
    printf("and i am ironman\n");
    recurse(count +1);
    return ;
}
int main()
{
    recurse(1);
    return 0;
}
