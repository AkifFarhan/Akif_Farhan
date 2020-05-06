#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int **ara,num[12];
    int i,j,total_classes,n;

    printf("Enter the total of classes : ");
    cin>>total_classes;
    ara=(int **)malloc(sizeof(int *)*total_classes);
    if(ara==NULL)
    {
        printf("Memory alloacation failed");
        return 1;
    }
    for(i=0;i<total_classes;i++)
    {
        printf("Enter the number of student for class %d: ",i+1);
        cin>>n;
        num[i]=n;
        ara[i]=(int *)malloc(sizeof(int)*n);
        if(ara[i]==NULL)
      {
        printf("Memory alloacation failed");
        return 1;
      }
      for(j=0;j<n;j++)
      {
          printf("nenter the marks for student %d: ",j+1);
          scanf("%d",&ara[i][j]);
      }
      }

    cout<<"output\n";
    for(i=0;i<total_classes;i++)
    {
        printf("class %d : ",i+1);
        for(j=0;j<num[i];j++)
            printf("%4d",ara[i][j]);
        printf("\n");
    }

}
