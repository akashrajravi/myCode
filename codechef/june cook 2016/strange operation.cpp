#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll a[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum&1)
        {
            cout<<"even"<<endl;
        }
        else
        {
            if(k==1)
            cout<<"odd"<<endl;
            else
            cout<<"even"<<endl;
        }
    }
    return 0;
}
