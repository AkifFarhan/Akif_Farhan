#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int id;
        char name[40];
    };
    int main()
    {
        struct student one;
        scanf("%d",&one.id);
        scanf("%s",one.name);

        printf("ID : %d",one.id);
        printf("Name: %s\n",one.name);
        return 0;
    }
}
