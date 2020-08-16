#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
using namespace std;
bitset<1000001> p;
vector<int> prime;
double eps=1e-6;
void calc(){
    for(int i=2;i<1e6+1;i++){
        if(!p[i]){
            prime.push_back(i);
            if(i<=1e3)
                for(int j=i*i;j<1e6;j+=i)
                    p[j]=1;
            }
        }
    }
int main(){
    calc();
    ios::sync_with_stdio(0);
    int n;
    while(cin>>n&&n){
        int ans=1;
        double lgn=log(n);
        for(int i=3;i<prime.size()&&prime[i]<=n;i++){
            int pw=lgn/log(prime[i]);
            while(pw--){
                ans*=prime[i];
                while(ans>=10)
                    if(ans%10)
                        ans%=10;
                    else
                        ans/=10;
            }
        }
        int pw=lgn/log(3);
        while(pw--){
            ans*=3;
            while(ans>=10)
                if(ans%10)
                    ans%=10;
                else
                    ans/=10;
        }
        pw=(int)(lgn/log(2))-(int)(lgn/log(5));
        while(pw--){
            ans*=2;
            while(ans>=10)
                if(ans%10)
                    ans%=10;
                else
                    ans/=10;
        }
        cout<<ans<<endl;
    }
}
