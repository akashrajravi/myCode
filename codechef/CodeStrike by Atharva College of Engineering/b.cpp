#include<bits/stdc++.h>
using namespace std;
int a[1001];
int search_(int l,int r,int x)
{
    if(l<r)
    {
        int m=(r-l)/2+l;
        if(a[m]==x)
        return m;
        if(a[m]<x)
        search_(m+1,r,x);
        else
        search_(l,m-1,x);
    }
}
int main()
{
    int t,i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<=1000;i++)
    a[i]=i;
    cin>>t;
    while(t--)
    {
        int x,y,l,r;
        cin>>x>>y;
        l=search_(0,999,x);
        r=search_(0,999,y);
        cout<<abs(l-r)<<endl;
    }
    return 0;
}
