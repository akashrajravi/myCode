#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,ans=0,cnt=1;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=n-1;i>0;i--)
            ans+=a[i]-a[i-1];
        cout<<ans<<endl;
    }
    return 0;
}
