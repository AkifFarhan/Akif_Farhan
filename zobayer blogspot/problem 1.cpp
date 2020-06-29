 #include<bits/stdc++.h>
using namespace std;


int a[100000];
int n;
void reverse(int i)
{
    if(i==n/2+1)
        return;
    swap(a[n-i-1],a[i]);
    reverse(i+1);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    reverse(0);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
