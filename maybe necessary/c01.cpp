// C++ implementation of the approach
#include <iostream>
using namespace std;

// Function that returns true if n
// can be represented as the sum of
// exactly k distinct positive integers
bool solve(int n, int k)
{
    // If n can be represented as
    // 1 + 2 + 3 + ... + (k - 1) + (k + x)
    if (n >= (k * (k + 1)) / 2) {
        return true;
    }

    return false;
}

// Driver code
int main()
{
    int n = 7, k = 3;

    if (solve(n, k))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
