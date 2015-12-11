#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,i;
        scanf("%lld%lld",&n,&m);
        long long int time[n],prof[n],k,ans;
        double temp,max=-1.000000;
        for(i=0;i<n;i++)
        scanf("%lld",&time[i]);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&prof[i]);
            temp=prof[i]/time[i];
            if(temp>max)
            {
                max=temp;
                k=i;
            }
        }
        ans=(m/time[k])*prof[k];
        printf("%lld\n",ans);
    }
    return 0;
}
