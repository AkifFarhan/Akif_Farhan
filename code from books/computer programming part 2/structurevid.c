#include<stdio.h>

struct record
{
    char name[10];
    char phone[15];
    char email[15];
};
int  main()
{
    struct record a[2];
    for(int i=0;i<2;i++)
    {
        printf("Please enter the name :");
        scanf("%s",&a[i].name);
        printf("Please enter the phone :");
        scanf("%s",&a[i].phone);
        printf("Please enter the email :");
        scanf("%s",&a[i].email);
    }
for(int i=0;i<2;i++)
{
    printf("name %s\nPhone %s\nEmail %s\n\n",a[i].name,a[i].phone,a[i].email);
}

    return 0;

}
