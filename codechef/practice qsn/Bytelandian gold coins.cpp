#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
ll count(ll n)
{
    if(mp[n])
        return mp[n];
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    mp[n]= max(n,(count(n/2)+count(n/3)+count(n/4)));
    return mp[n];
}
int main()
{
    ll n,ans=0;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}
