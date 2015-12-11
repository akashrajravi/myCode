#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define gc getchar_unlocked

void scanint(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}
ll fact[5001][5001];
int main()
{
    ll t,i,j;
    for (i=0;i<=5000;i++)
    {
        for (j=0;j<=i;j++)
        {
            if(j==0||j==i)
                fact[i][j]=1;
            else
                fact[i][j]=(fact[i-1][j-1]+fact[i-1][j])%mod;
        }
    }
    scanint(t);
    while(t--)
    {
        map<string,ll>m;
        map<ll,ll>p;
        map<string,ll>::iterator it;
        map<ll,ll>::reverse_iterator it2,it1;
        ll n,q,j=1,i,k;
        scanint(n);
        scanint(q);
        string a,b;
        cin>>a;
        while(j<=n)
        {
            k=0;
            i=j;
            while(k+i<=n)
            {
                m[a.substr(k,i)]++;
                k++;
            }
            j++;
        }
        ll max1=0,len;
        for(it=m.begin();it!=m.end();it++)
            p[it->second]++;
        //it2=p.rbegin();
        //max1=it2->first;
        // len=max1-1;
        // ll arr[max1];
        // //cout<<max1;
        while(q--)
        {
            ll l,ans=0;
            scanint(l);
            for(it1=p.rbegin();it1!=p.rend();it1++)
            {
                if(it1->first<l)
                    break;
                ans=(ans+it1->second*fact[it1->first][l])%mod;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
