#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,l,r,i,x;
    long long sum=0;
    map<int,int>mp;
    map<int,int>::iterator it;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    //reverse(a,a+n);
    /*for(i=1;i<n;i++)
        a[i]+=a[i-1];*/
    while(q--)
    {
        cin>>l>>r;
        for(i=l;i<=r;i++)
        mp[n-i+1]++;
        /*x=abs(r-l);
        sum+=a[x];*/
    }
    for(it=mp.begin();it!=mp.end();it++)
        sum+=a[n-it->first]*it->second;
    cout<<sum<<endl;
    return 0;
}
