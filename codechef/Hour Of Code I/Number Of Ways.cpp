#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll fact[10001][5001];
int main(int argc, char *argv[])
{
    ll t,i,j,k=5001;
    for (i=0;i<=10001;i++)
    {
        for (j=0;j<=min(i,(k-i));j++)
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
        ll n,m;
        cin>>n>>m;
        cout<<fact[n][min(m,(1000-m))]<<endl;
    }
    return 0;
}
