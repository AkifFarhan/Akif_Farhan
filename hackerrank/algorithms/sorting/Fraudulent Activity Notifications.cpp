#include <bits/stdc++.h>
using namespace std;

int n, m, a[200009], c[209];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        c[a[i]]++;

    int ans = 0;

    for(int i = m; i < n; i++)
    {
        int cnt = 0, res = 0;

        for(int j = 0; j <= 200; j++)
            {
               int cnt2 = cnt + c[j];
                if(m % 2 == 1)
                 {
                    if(cnt <= m / 2 && m / 2 < cnt2)
                       res = j * 2;
                 }
                else
                {
                   if(cnt < m / 2 && m / 2 < cnt2)
                      res = j * 2;
                   else if(cnt2 == m / 2)
                      res += j;
                   else if(cnt == m / 2)
                      res += j;
                }
              cnt = cnt2;
          }

        c[a[i]]++;
        c[a[i - m]]--;
        if(res <= a[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}
