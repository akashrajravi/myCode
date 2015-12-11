#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll getsum(ll a)
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
        ll a,d,l,r,sum=0,ans=0,i,ar[1000],span,temp,j,k;
        scanf("%lld%lld%lld%lld",&a,&d,&l,&r);
        temp=0;
        i=1;
        ar[0]=getsum(a);
        sum=ar[0];
        //cout<<ar[0]<<" ";
        temp=getsum(a+d);
        a+=d;
        while(i<10 && ar[0]!=temp)
        {
            ar[i]=temp;
            sum+=temp;
            //cout<<temp<<" ";
            i++;
            a+=d;
            temp=getsum(a);

        }
        //cout<<i<<" ";
        //sum=(((r-l+1))*(2*a +((r-l)*d)))/2;
        ans+=(r/i-(l-1)/i)*sum;
        k=i;
        i=r%i;
        for(j=0;j<i;j++)
            ans+=ar[j];
        k=(l-1)%k;
        for(j=0;j<k;j++)
            ans-=ar[j];
        printf("%lld\n",ans);
    }
    return 0;
}
