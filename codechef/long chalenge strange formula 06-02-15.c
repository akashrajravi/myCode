#include<stdio.h>
#include<math.h>
int factorial(long long int num,long long int m)
{
    long long int n=num,fac=1;
    while(n>0)
    {
        if(fac==0)
            return fac;
        else
        {
            fac=(fac%m)*n;
            n--;
        }
    }
    return fac;
}
int main()
{
    long long int i,n,m,j,k,ans=0,fac,max=0,temp=0,t;
    scanf("%lld%lld",&n,&m);
    long long int a[n],num[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>=max)
            max=a[i];
    }
    if(max>m)
        max=m;
    long long int store[max];
    for(i=0;i<max;i++)
        store[i]=0;
    j=max;
    k=0;
    while(j>0)
        {
            if(j>=m)
                j=m-1;
            else
                store[--j]=factorial(j+1,m);
           // printf(" %lld\t",store[j]);
        }
        //ans=temp%m;
       // printf("      %lld  %lld",ans,temp);
    for(i=0;i<n;i++)
    {
        j=1;
        while(j<=a[i])
        {
            if(j>=m)
                {
                    ans+=((j%m)*(a[i]%m));
                    ans=ans%m;
                    j++;
                }
            else
            {
                ans+=((j%m)*((store[j-1]+a[i])%m));
                ans=ans%m;
                j++;
            }

        }
        //printf("%lld\t",ans);
    }
        printf("%lld\n",ans%m);
    return 0;
}
