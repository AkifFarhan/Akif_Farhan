#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int *ara[5],num[5];
    int i,j,n;

    for(i=0;i<5;i++)
    {
        printf("Enter the number of student for class %d : ",i+1);
        cin>>n;
        num[i]=n;
        ara[i]=(int *)malloc(sizeof(int)*n);
        /*if(ara[i]==NULL)
        {
            cout<<"m a failed\n";
            return 1;
        }*/
        for(j=0;j<n;j++)
        {
            printf("Enter marks for student%d: ",j+1);
            cin>>ara[i][j];
        }
    }
    cout<<"Output\n";
    for(i=0;i<5;i++)
    {
        printf("class %d : ",i+1);
        for(j=0;j<num[i];j++)
        {
            printf("%4d ",ara[i][j]);
        }
        printf("\n");
    }
}
