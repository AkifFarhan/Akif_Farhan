#include<bits/stdc++.h>
int main()
{
    FILE *fp;
    fp=fopen("my_file2.text","r");
    char alu[500];

    while (!feof(fp))
    {
        fgets(alu,500,fp);

        puts(alu);
    }
    return 0;
}
