#include<bits/stdc++.h>
int main()
{
    FILE *fp;
    char filename[]="my_file.text";

    fp=fopen(filename,"w");

    fprintf(fp,"this is a file created by my program!");
    fprintf(fp,"i am really sad.");

    fclose(fp);

    return 0;
}
