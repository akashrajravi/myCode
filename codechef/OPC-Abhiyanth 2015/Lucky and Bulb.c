#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,j,ans=0;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
            a[i]=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j%i!=0)
                    {
                       if(a[j-1]==1)
                            a[j-1]=0;
                       else
                            a[j-1]=1;
                    }
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            ans++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
