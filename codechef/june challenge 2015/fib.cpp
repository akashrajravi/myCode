#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
const ll mod =99991;
ll ans,k1;
map<ll,ll>f;
//map<ll,ll>temp;
//map<ll,ll> :: iterator it;
void scanint(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        {x = (x<<1) + (x<<3) + c - 48;}
}
ll search(ll a[],ll x,ll max1,ll min1)
{
     if (max1>=min1)
   {
        ll mid =min1+(max1-min1)/2;
        if (a[mid]==x )
            return x;
        if(a[mid+1]>x && a[mid]<x)
            return a[mid];
        if (a[mid] > x)
        return search(a,min1, mid-1, x);
        return search(a, mid+1, max1, x);
   }
}
ll fib(ll n)
{
    if(f.count(n))
       return f[n];
	ll k=n/2;
	if (n%2==0)
        return f[n]=((fib(k)*fib(k))%mod+((fib(k-1)*fib(k-1))%mod)%mod);
    else
        return f[n]=((fib(k)*fib(k+1))%mod+((fib(k-1)*fib(k))%mod)%mod);
}
/*void lastcall()
{
    for(it=temp.begin();it!=temp.end();it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            ans=(ans+fib((it->first))*it->second)%mod;
        }
}*/
void subset(ll a[],ll b[],ll x1,ll x2,ll index,ll r)
{
    ll j, i;
    if (index == r)
    {
        ll sum=0,x,y;
        for (j=0;j<r;j++)
            sum+=b[j];
            x=search(a,sum,x2,0);
            y=sum-x;//cout<<x<<"   "<<y<<endl;
               sum=((fib(x-1)*fib(y-2))+(fib(x)*fib(y-1)))%mod;
               //cout<<sum<<" ";
        	ans=(ans+sum)%mod;
        return;
    }
    for (i=x1;i<=x2 && x2-i+1>= r-index;i++)
    {
        b[index] = a[i];
        subset(a,b,i+1,x2,index+1,r);
    }

}
int main()
{
    ll n,l,i,k1;
      f[0]=1;
    f[1]=1;
    //fib1(10000000000);
     scanint(n);
     scanint(k1);
     //cin>>n>>k1;
    ll a[n],b[k1];
        for(i=0;i<n;i++)
          //scanint(a[i]);
          {
              scanint(a[i]);
              fib(a[i]);
          }
          sort(a,a+n);
        subset(a,b,0,n-1,0,k1);
         //lastcall();
        cout<<ans<<endl;
    return 0;
}
