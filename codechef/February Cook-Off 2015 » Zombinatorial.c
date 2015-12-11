#include<stdio.h>
#include<math.h>
int fact(long long int n,long long int m)
{
    long long int i,j=n,fac=1,k;
    for(i=1;i<=n;i++)
    {
        if(fac==0)
        return fac;
        else
        {
            k=pow(i,j);
            fac=((fac%m)*(k%m));
            j--;
        }
    }
    printf("%lld\t",fac);
    return fac;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,q,i;
        scanf("%lld%lld%lld",&n,&m,&q);
        long long int r[q],x,y,z;
        for(i=0;i<q;i++)
        {
            scanf("%lld",&r[i]);
            x=(fact(n,m)%m);
            y=(fact(n-r[i],m)%m);
            z=(fact(r[i],m)%m);
            printf("  %lld %lld %lld",x,y,z);
            if(y==0 || z==0)
                printf("0\n");
            else
            printf("%lld\n",(x/(y*z)));
        }
    }
    return 0;
}
