#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int comparefunc(const void * a,const void *b)
{
    cout<<"comparing "<<(*(int *)a) <<" and "<<(*(int *)b)<<"    ";
    cout<<(*(int *)a -*(int *)b)<<endl;
       return (*(int *)a -*(int *)b);
}
int main()
{
    int i,n=5;
    int values[]={2,3,1,5,4};

    qsort(values ,5,sizeof(int),comparefunc);

    for(i=0;i<n;i++)
    {
        printf("%d ",values[i]);
    }

    printf("\n");

    return 0;
}
