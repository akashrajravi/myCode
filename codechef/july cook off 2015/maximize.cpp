#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,d,i,ans=0;
        cin>>n>>d;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=n-1;i>0;)
        {
            if((a[i]-a[i-1])<d)
            {
                ans+=(a[i]+a[i-1]);
                i-=2;
            }
            else
            i--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
