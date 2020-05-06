#include<bits/stdc++.h>
#include<stdlib.h>

int comparefunc(const void * a,const void *b)
{
  return (*(int *)a-*(int *)b);
}
int main()
{
    int i;
    i=comparefunc( 8 , 7 );
    cout<<i;
    return 0;
}
