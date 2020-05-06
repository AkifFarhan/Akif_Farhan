#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator it;

     m["rafin"]=45;
     m["akif"]=43;
     m["Tanvir"]=41;
     m["abi"]=61;
     m["nannu"]=42;

     for(it=m.begin();it!=m.end();it++)
     {
     cout<<it->first <<"\t"<<it->second<<endl;
     }
     return 0;
}
