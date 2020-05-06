#include<bits/stdc++.h>
using namespace std;

int binary(int a[],int n,int k,int mid){
	int count=1;
	int range=a[0]+2*mid;
	for(int i=1;i<n;i++){
		if(range>=a[i])
		continue;
		else{
			count++;
			range=a[i]+2*mid;
		}
	}
	return count;
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int h=a[n-1]-a[0];
	int l=0;
	while(l<h){
		int mid=(l+h)/2;
		int mon=binary(a,n,k,mid);
		if(mon<=k)h=mid;
		else
		l=mid+1;
	}
	cout<<h;
	return 0;
}
