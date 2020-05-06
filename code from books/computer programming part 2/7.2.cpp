#include <bits/stdc++.h>
#include <stdlib.h>

int main () {
   int i, n;
   int *marks;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   marks = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&marks[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",marks[i]);
   }
   free( marks );

   return(0);
}
