#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll a[1000010];
int main()
{
    ll t,i;
    a[0]=1;
    for(i=1;i<=1000000;i++)
        a[i]=(a[i-1]*i)%mod;
    for(i=1;i<=1000000;i++)
        a[i]=(a[i]+a[i-1])%mod;
    cin>>t;
    while(t--)
    {
        ll x,y,ans;
        cin>>x>>y;
        ans=a[y]-a[x-1];
        if(ans<0)
            ans+mod;
        cout<<ans<<endl;
    }
    return 0;
}
