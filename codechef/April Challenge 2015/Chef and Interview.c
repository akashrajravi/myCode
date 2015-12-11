#include<stdio.h>
int main()
{
    int t;
    long long int i,j,sum=0,a[100001];
    for(i=0;i<100000;i++)
        a[i]=0;
        a[1]=1;
    for(j=2;j<=100000;j++)
        {
            sum=0;
            for(i=1;i<=j/2;i++)
            {
                if(j%i==0)
                sum+=i;
            }
            a[j]=sum+j;
        }
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}
