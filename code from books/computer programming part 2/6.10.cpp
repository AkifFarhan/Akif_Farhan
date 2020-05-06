#include<bits/stdc++.h>
struct
{
    char ch;
    int n;
    char str[16];
}sv;

union
{
    char ch;
    int n;
    char str[16];
}uv;

int main()
{
    int struct_size,union_size;

    struct_size=sizeof(sv);
    union_size=sizeof(uv);

    printf("structure variable took %d bytes \n",struct_size);
    printf("union variable took %d bytes \n",union_size);

    return 0;
}
