#include<stdio.h>
int hcf(long long int a,long long int b)
    {
        if(a%b==0)
            return b;
        else
            return(hcf(b,a%b));
    }
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int i,j,h,n,a[100001];
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        for(i=0;i<n-1;i++)
        {
            h=hcf(a[i],a[i+1]);
            a[i+1]=h;
        }
            printf("%lld\n",h);
    }
    return 0;
  }
