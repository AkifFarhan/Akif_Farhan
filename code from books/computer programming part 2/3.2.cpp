#include<bits/stdc++.h>
int main()
{
    FILE *fp;
    char filename[]="my_file2.text";
    fp=fopen(filename,"w");

    fprintf(fp,"This is the second file created by my program!");
    fprintf(fp,"i am really confused.\n");
    fclose(fp);
    fprintf(fp,"i dont want to print this one.\n");

    return 0;
}
