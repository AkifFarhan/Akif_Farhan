#include<bits/stdc++.h>
#include<stdlib.h>

int main()
{
    int *marks;
    int i,n;
    printf("Please enter the number of student : ");
    scanf("%d",&n);

    marks = (int *)malloc(sizeof(int)*n);

    printf("ENTER the marks for each student : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

        printf("Now here you can see values: \n");

        for(i=0;i<n;i++)
        {
            printf("%d\n",marks[i]);
        }
    return 0;
}
