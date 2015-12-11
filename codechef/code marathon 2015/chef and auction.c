#include<stdio.h>
int main()
{
    int k,t;
    scanf("%d ",&t);
    for(k=0;k<t;k++)
    {
        long long int n,m,o,i,count=1;
        scanf("%lld%lld%lld",&n,&m,&o);
        long long int a[n];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        if(a[0]<o)
        {
            printf("-1\n");
        }
        else
        {
            i=1;
            while(i<n)
            {
                if(a[i]>=o)
                    count++;
                    i++;
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}
