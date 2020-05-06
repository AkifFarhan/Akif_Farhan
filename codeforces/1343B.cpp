#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,l,k;
	cin>>t;

	while(t--){
		cin>>n;
		n=n/2;
		if(n%2)
            cout<<"NO"<<endl;
		else{
            l=0;
            k=0;
			printf("YES\n");
			for(i=1;i<=n;i++)
            {
                cout<<2*i<<" ";
                k=k+2*i;
            }

			for(i=1;i<n;i++)
            {
			    cout<<2*i-1<<" ";
			    l=l+2*i-1;
            }

			cout<<k-l<<endl;
		}
	}
	return 0;
}
