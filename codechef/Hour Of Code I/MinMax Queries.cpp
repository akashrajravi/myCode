#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
    ll n,q;
    cin>>n>>q;
    ll a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(q--)
    {
        ll i,min,max,l,r;
        cin>>l>>r;
        min=a[l];
        max=a[l];
        for(i=l+1;i<=r;i++)
         if(min>a[i])
         min=a[i];
        for(i=l+1;i<=r;i++)
        if(max<a[i])
        max=a[i];
        cout<<max-min<<endl;
    }
    return 0;
}
