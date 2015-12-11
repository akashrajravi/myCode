#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>f;
map<ll,ll> :: iterator it;
ll fib(ll n)
{
    if(f.count(n))
       return f[n];
	ll k=n/2;
	if (n%2==0)
        return f[n]=fib(k)*fib(k)+fib(k-1)*fib(k-1);
    else
        return f[n]=fib(k)*fib(k+1)+(fib(k-1)*fib(k));
}
int main()
{
    ll i;
    f[0]=1;
    f[1]=1;
    for(i=2;i<=100;i++)
    {
        fib(i);

    }
    cout<<f[15]<<" ";
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        for(it=f.begin();it!=f.end();it++)
        {
            if(it->second>=n)
            {
                if(it->second==1)
                    cout<<1<<endl;
                else if(it->second==n)
                    cout<<it->first<<endl;
                else
                    cout<<it->first-1<<endl;
                break;
            }
        }
    }
    return 0;
}
