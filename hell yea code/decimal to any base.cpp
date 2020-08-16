#include<bits/stdc++.h>
using namespace std;

vector<char>ans;

void basechange(int n,int k)
{

    int i,j,z;
    for(i=0;n>0;i++)
    {
        z = n%k;
        char r;
        if(z>=0 && z<=9)
           r = (char)(z + '0');
        else
           r = (char)(z - 10 + 'A');

        ans.push_back(r);
        n/=k;
    }

    for(i=ans.size()-1;i>=0;i--)
        cout<<ans[i];
    cout<<endl;

}

int main()
{
    int n,k;
    cout<<"enter decimal value: ";
    cin>>n;
    cout<<"enter the base you want: ";
    cin>>k;

    cout<<n<<" in base "<<k<<" is ";
    basechange(n,k);
}
