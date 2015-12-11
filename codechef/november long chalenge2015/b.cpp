#include<bits/stdc++.h>
using namespace std;
#define ll long long
int getsum(ll a)
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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,d,l,r,sum=0,ans=0,i,ar[10],span,temp,j;
        scanf("%lld%lld%lld%lld",&a,&d,&l,&r);
        //sum=(((r-l+1))*(2*a +((r-l)*d)))/2;
        ans=((r-l+1)/9)*45;
        i=(r-l+1)-(r-l+1)/9;
        a=a+(l-1)*d;
        for(j=0;j<i;j++)
        {
            ans+=getsum(a);
            a+=d;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
