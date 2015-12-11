#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
#define mod 1000000007
 ll fact( ll x)
   {
     ll f=1;
     ll i;
     for(i=1;i<=x;i++)
       f=f*i;
     return(f);
   }
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans=0,a,b,c,d,i;
        cin>>n>>k;
        if(k<=2 && n==1)
        cout<<"0"<<endl;
        else
        {
            for(i=1;i<=n;i++)
            {
                a=fact(n);
                b=fact(i);
                c=fact(n-i);
                ans+=a/(b*c);
                ans%=mod;
            }
            d=fact(k);
            d%=mod;
            ans*=d;
            ans%=mod;
            cout<<ans<<endl;
        }
    }
    return 0;
}
