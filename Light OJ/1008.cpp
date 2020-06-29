#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;

   for(int i=1;i<=t;i++)
   {
       ll num;
       cin>>num;

        ll sqr = ceil(sqrt(num));

        ll row = 0, col = 0;

        if(sqr*sqr - num < sqr)
        {
            row = sqr*sqr - num + 1;
            col = sqr;
        }
        else
        {
            row = sqr;
            col = num - (sqr - 1) * (sqr - 1);
        }

        if(sqr % 2 == 0)
            swap(row, col);

        cout << "Case " << i << ": ";
        cout << row << " " << col << endl;
    }

    return 0;
}

