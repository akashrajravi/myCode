#include<bits/stdc++.h>
using namespace std;
#define mod 1000000000
#define ll long long
ll fact[4001][2001],x[2001][2001];
int main()
{
    ll t,i,j,k=2000;
    for (i=0;i<=4000;i++)
    {
        for (j=0;j<=min(i,k);j++)
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
        ll n,m,i,j;
        cin>>n>>m;
        if(m==1 && n==1)
            cout<<2<<endl;
        else
        {
            ll ans[2001],cnt=0;
            ans[0]=1;
            for(i=1;i<=m;i++)
                ans[i]=fact[m-1+i][i];
            x[1][m]=ans[m];
            for(i=m-1;i>=0;i--)
            x[1][i]=(x[1][i+1]+ans[i])%mod;
        for(i=2;i<=n;i++)
        {
            for(j=m;j>=0;j--)
            {
                if(j==m)
                x[i][j]=(x[i-1][m]*ans[j])%mod;
                else
                x[i][j]=(((x[i-1][j]*ans[j])%mod)+x[i][j+1])%mod;
            }
        }
        cout<<x[n][0]<<endl;
        }
    }
    return 0;
}
