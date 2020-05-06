#include<stdio.h>
char to_upper(char ch)
{
    return ch & 95;
}
char to_lower(char ch)
{
    return ch|32;
}
int main()
{
    char *str ="Afvnjkd";
    for(int i=0;i<10;i++)
    {
        printf("uppercase : %c ,",to_upper(str[i]));
        printf("lowercase : %c ,",to_lower(str[i]));

    }
    return 0;
}
