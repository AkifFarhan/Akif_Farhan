#include<bits/stdc++.h>
using namespace std;
/*bool cmp1(int x,int y)
{
    return x<y
}
bool cmp2(int x,int y)
{
    return x>y;
}*/

bool cmp(int p, int q)
{
   //cout<<"comparing  "<<p<<" and "<< q<<endl ;
    if(p%2 == q%2)
    {
        if(p%2==0 && q%2==0)
         return p<q;
        else
            return p>q;
    }
    return q%2;
}

int main()
{
    int a[]={1,5,3,4,10,8,9,2,7,6};
    int i, n=sizeof(a)/sizeof(a[0]);
//    int b[n],k=0,l=n-1,i;
//    for(i=0;i<n;i++)
//    {
//        if(a[i]%2==0)
//        {
//            b[k]=a[i];
//            k++;
//        }
//        else
//        {
//            b[l]=a[i];
//            l--;
//        }
//    }
//    sort(b,b+k,cmp1);
//    sort(b+k,b+n,cmp2);
    sort(a, a+n, cmp);

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
