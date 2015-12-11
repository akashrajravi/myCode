#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q,x,y,z;
    cin>>n;
    ll a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        a[i]=x*y;
    }
    reverse sort(a,a+n);
    cin>>q;
    while(q--)
    {
        cin>>z;
        cout<<a[z-1]<<endl;
    }
    return 0;
}
