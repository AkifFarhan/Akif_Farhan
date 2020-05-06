#include <bits/stdc++.h>

using namespace std;

// Function to find first or last occurrence of a given number in
// sorted array of integers. If searchFirst is true, we return the
// first occurrence of the number else we return its last occurrence
int BinarySearch(int A[], int N, int x, int searchFirst)
{
	// search space is A[low..high]
	int low = 0, high = N - 1;

	// initialize the result by -1
	int result = -1;

	// iterate till search space contains at-least one element
	while (low <= high)
	{
		// find the mid value in the search space and
		// compares it with target value
		int mid = (low + high)/2;

		// if target is found, update the result
		if (x == A[mid])
		{
			result = mid;

			// go on searching towards left (lower indices)
			if (searchFirst)
				high = mid - 1;

			// go on searching towards right (higher indices)
			else
				low = mid + 1;
		}

		// if target is less than the mid element, discard right half
		else if (x < A[mid])
			high = mid - 1;

		// if target is more than the mid element, discard left half
		else
			low = mid + 1;
	}

	// return the found index or -1 if the element is not found
	return result;
}

// Count occurrences of a number in a sorted array with duplicates
int main(void)
{
	int A[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
	int target;
	cout<<"target please: ";
	cin>>target;
	int n = sizeof(A)/sizeof(A[0]);

	// pass value 1 for first occurrence
	int first = BinarySearch(A, n, target, 1);

	// pass value 0 for last occurrence
	int last = BinarySearch(A, n, target, 0);

	int count = last - first + 1;

	if (first != -1)
		printf("Element %d occurs %d times.", target, count);
	else
		printf("Element not found in the array.");

	return 0;
}
