//bit_hack
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
void scanint(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}
int get_sum(ll a)
{
     ll temp=0;
    while(1)
    {
        while(a)
        {
            temp+=(a%10);
            a/=10;
        }
        while(temp)
        {
            a+=(temp%10);
            temp/=10;
        }
        if(a<10)
            break;
    }
    return a;
}
int main()
{
    ll t;
    scanint(t);
    while(t--)
    {
        ll a,d,l,r,i=1,arr[10],temp,j,k,sum=0,ans=0;
        scanint(a);
        scanint(d);
        scanint(l);
        scanint(r);
        temp=0;
        arr[0]=get_sum(a);
        sum=arr[0];
        temp=get_sum(a+d);
        a+=d;
        while(arr[0]!=temp)
        {
            arr[i]=temp;
            sum+=temp;
            i++;
            a+=d;
            temp=get_sum(a);
        }
        ans+=(r/i-(l-1)/i)*sum;
        k=(l-1)%i;
        for(j=0;j<k;j++)
            ans-=arr[j];
        i=r%i;
        for(j=0;j<i;j++)
            ans+=arr[j];
        cout<<ans<<endl;
    }
    return 0;
}
