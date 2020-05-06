#include<bits/stdc++.h>
int add(int n)
{
    static int sum=0;
    if(n<1)
        return 1;
        sum=sum +n;
    add(n-1);

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",add(n));
    return 0;
}
