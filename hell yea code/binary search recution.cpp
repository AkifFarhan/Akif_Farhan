#include <bits/stdc++.h>
using namespace std;
int arr[] = {1,2,4,4,4,7,9};
int binarySearch(int arr[], int l, int h, int x)
{
   if (h >= l)
   {
        int mid = l + (h - l)/2;

        if (arr[mid] == x)
        return mid;

        else if (arr[mid] > x)
        return binarySearch(arr, l, mid-1, x);

        else
        return binarySearch(arr, mid+1, h, x);
   }
  return -1;
}

int main()
{
    int x;
   int n = sizeof(arr)/ sizeof(arr[0]);
   cout<<"enter the number: ";
   cin>>x;
   int result = binarySearch(arr, 0, n-1, x);
   if(result == -1)
    cout<<"not present";
    else
   cout<<"Element is present at index and it's place is "<<result+1;
   return 0;
}
