#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,sum=0,ans=0;
        cin>>n;
        ll a[n];
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        j=n-1;
        for(i=1;i<n;i++)
        {
            ans+=(sum-a[i-1]*j);
            sum-=a[i];
            j--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
