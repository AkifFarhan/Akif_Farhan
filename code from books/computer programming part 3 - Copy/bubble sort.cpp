#include <bits/stdc++.h>
using namespace std;
void bubble_sort();
int a[30], n,cnt=0;
int main()
{
    int i;
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    bubble_sort();
    printf("\nAfter sorting:\n");
    for(i=0; i<n; i++)
        printf("\n%d", a[i]);
    return 0;
}
void bubble_sort()
{
    int i,j,k,z=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout << ++cnt << ": ";
            for(k=0;k<n;k++)
                cout<<a[k]<<" ";
            cout << endl;
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                z=1;
            }
        }
       if(z==0)
         break;
    }
}
