#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,j;

    cout << "XOR:" << endl;
    for(i = 0; i <= 10; i++)
        cout << setw(4) << i;
    cout << endl;
    for(i=1;i<=10;i++)
    {
        cout << setw(4) << i;
        for(t=1;t<=10;t++)
            cout<< setw(4) << (i^t);
        cout << endl;
    }

    cout << "AND:" << endl;
    for(i = 0; i <= 10; i++)
        cout << setw(4) << i;
    cout << endl;
    for(i=1;i<=10;i++)
    {
        cout << setw(4) << i;
        for(t=1;t<=10;t++)
            cout<< setw(4) << (i&t);
        cout << endl;
    }
        cout << "OR:" << endl;
    for(i = 0; i <= 10; i++)
        cout << setw(4) << i;
    cout << endl;
    for(i=1;i<=10;i++)
    {
        cout << setw(4) << i;
        for(t=1;t<=10;t++)
            cout<< setw(4) << (i|t);
        cout << endl;
    }
}
