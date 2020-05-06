#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter a positive integer (>0): ");
    cin>>n;

    switch(n)
    {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("two\n");
            break;
        default:
            printf("many\n");
            break;
    }
}
