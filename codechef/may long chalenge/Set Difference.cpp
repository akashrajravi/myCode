#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
void sort1(ll arr[],ll min1,ll mid,ll max1);
void mergesort(ll arr[],ll min1,ll max1)
{
    ll mid;
    if(min1<max1)
    {
        mid=(min1+max1)/2;
        mergesort(arr,min1,mid);
        mergesort(arr,mid+1,max1);
        sort1(arr,min1,mid,max1);
    }
}
void sort1(ll arr[],ll min1,ll mid,ll max1)
{
    ll i=min1,j=mid+1,k,temp[max1],index=min1;
    while(i<=mid && j<=max1)
    {
        if(arr[i]<arr[j])
        {
            temp[index]=arr[i];
            index++;
            i++;
        }
        else
        {
            temp[index]=arr[j];
            index++;
            j++;
        }
    }
    if(i<mid+1)
    {
        while(i<=mid)
        {
            temp[index]=arr[i];
            index++;
            i++;
        }
    }
    else
    {
        while(j<=max1)
        {
            temp[index]=arr[j];
            index++;
            j++;
        }
    }
    for(k=min1;k<index;k++)
    arr[k]=temp[k];
}
int main()
{
    ll t,b[100000],k;
    b[0]=1;
    for(k=1;k<=99999;k++)
        {
            b[k]=(b[k-1]*2);
            if(b[k]>=mod)
            b[k]%=mod;
        }
    cin>>t;
    while(t--)
    {
        ll n,i,ans=0,j;
        cin>>n;
        ll a[n],c[n],sub=0;
        for(i=0;i<n;i++)
           cin>>a[i];
        mergesort(a,0,n-1);
        if(n>2)
        {
            j=n-2;
            for(i=0;i<(n+1)/2;i++)
            {
                sub=(sub+a[j+1]-a[i])%mod;
                c[i]=(sub*b[i]%mod);
                c[j]=(sub*b[j]%mod);
                j--;
            }
            for(i=0;i<n-1;i++)
                ans=(ans+c[i])%mod;
                ans%=mod;
            cout<<ans<<endl;
        }
        else if(n==2)
            cout<<max(a[1],a[0])-min(a[1],a[0])<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
