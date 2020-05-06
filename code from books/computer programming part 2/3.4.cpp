#include<bits/stdc++.h>
int main()
{
    FILE *fp_in,*fp_out;
    //char *input_file = "in.txt";
    //char *output_file ="out.txt";
    int num1,num2,sum;

    fp_in=fopen("in.txt","r");
    fp_out=fopen("out.txt","w");

    fscanf(fp_in,"%d",&num1);
    fscanf(fp_in,"%d",&num2);

    sum=num1+num2;
    printf("%d%d%d\n",num1,num2,sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
