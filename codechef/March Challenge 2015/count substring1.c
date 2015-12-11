#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        long long n,k,q,i,l,r,j,m,count=1,ans=0,p;
        scanf("%lld%lld%lld",&n,&k,&q);
        char str[n+1];
        scanf("%s",str);
        for(i=0;i<q;i++)
        {
            scanf("%lld%lld",&l,&r);
            m=l-1;
            p=m;
            for(j=l;j<r;j++)
            {
                if(str[j]==str[j-1])
                {
                    count++;
                }
                else if(str[j]!=str[j-1])
                {
                    if(count>k)
                    {
                        ans+=(count-m+1)*(count-m+2)/2;
                        ans-=(count-k)*(count-k+1)/2;
                        ans-=3;
                        ans-=(j-count-l+2)*(count-k);
                        m=j-2;
                        count=1;
                    }
                    else
                    count=1;
                }
                 if(j==r-1)
                {
                    if(count>k)
                    {
                        ans-=(count-k)*(count-k+1)/2;
                        ans-=(j-count-l+2)*(count-k);
                    }
                    ans+=(j-m+1)*(j-m+2)/2;
                    printf("%lld\n",ans);
                    ans=0;
                    count=1;
                }
            }
        }
    }
    return 0;
}
