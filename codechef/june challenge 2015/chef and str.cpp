#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
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
    cin>>t;
    while(t--)
    {
        map<string,ll>m;
        map<ll,ll>p;
        ll n,q,j=1,i,k;
        cin>>n>>q;
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
        ll max1=0;
        map<string,ll>::iterator it;
        map<ll,ll>::iterator it1,it2;
        map<ll,ll>::reverse_iterator it3;
        for(it=m.begin();it!=m.end();it++)
            p[it->second]++;
        it3=p.rbegin();
        max1=it3->first;
        ll r,ar[max1];
            memset(ar,0,sizeof(ar));

        //cout<<max1;
        while(q--)
        {
            ll l,ans=0;
            cin>>l;
            if(l>max1)
                cout<<0<<endl;
            else
            {
                 ll r=0;
                if(ar[l-1])
                cout<<ar[l-1]<<endl;
                else
                {
                    for(it1=p.begin();it1!=p.end();it1++)
                    {
                        for(it2=it1;it2!=p.end();it2++)
                            ar[r]+=fact[it2->first][r+1]*it2->second;
                            r++;
                    }
                    cout<<ar[l-1]<<endl;
                }
            }

        }
    }
    return 0;
}
