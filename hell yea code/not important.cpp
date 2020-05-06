#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int n;
    cin>>n;
  vector<int>v;
  vector<int>::iterator it;
  for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
//    for(int i=0;i<n;i++)
//    {
//       vector<int>::iterator it;
//      it = v.begin() + i;
//       if(*it%2==1)
//      {
//        //cout<<*it<<endl;
//        v.erase(v.begin() + i);
//      }
//    }
   i=1;
    v.erase(v.begin()+i);

     for (it = v.begin();it != v.end(); it++) {
        cout << *it << " ";
    }
}
