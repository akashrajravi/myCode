#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i,sum=0;
        cin>>a[0];
        sum=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>a[i-1])
            sum+=(a[i]-a[i-1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
