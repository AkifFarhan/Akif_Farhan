#include<bits/stdc++.h>

struct s1
{
    int n;
    double d;
    char c;
};

struct s2
{
    char c1;
    int n;
    char c2;
    double d;
    char c3;
    char c4;
};

struct s3
{
    double c;
    char n;
    int d;
};


int main()
{
    printf("char size : %lu bytes\n",sizeof(char));
    printf("int size :%lu bytes\n",sizeof(int));
    printf("double size : %lu bytes \n",sizeof(double));

    printf("s1 size : %lu bytes\n",sizeof(struct s1));
    printf("s2 size: %lu bytes\n",sizeof(struct s2));
    printf("s3 size: %lu bytes\n",sizeof(struct s3));

    return 0;
}