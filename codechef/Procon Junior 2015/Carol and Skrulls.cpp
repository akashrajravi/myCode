#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,prd=1,max1=INT_MIN,cnt=0,k;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                cnt++;
                if(max1<a[i])
                {
                   max1=a[i];
                    k=i;
                }
            }
            if(!a[i])
            a[i]=1;
        }
        if(cnt&1 && cnt!=1)
        a[k]=1;
        for(i=0;i<n;i++)
        prd=((prd%mod)*(a[i]%mod))%mod;
        cout<<prd%mod<<endl;
    }
    return 0;
}
