#include<stdio.h>
int main()
{
    double math[5]={90.1,91.2,92.3,93.4,94.5,95.5};
    int roll;
    for(roll=1;roll<=5;roll++)
    {

        printf("Roll:%d Math:%0.2lf\n",roll,math[roll-1]);
    }
    return 0;
}
