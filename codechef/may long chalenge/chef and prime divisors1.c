#include<stdio.h>
#include<math.h>
int gcd(long long int a,long long int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int check(long long int a,long long int b)
{
    long long int k,i;
      if(b%2==0 && a%2==1)
        return 0;
    if(a%b==0)
        return 1;
    while(b%2==0)
    {
        if(a%2)
        return 0;
        b/=2;
    }
    i=3;
    while(a%b!=0)
    {
        k=gcd(a,b);
        if(k==1)
        return 0;
        while(b%k==0)
        b/=k;
        while(b%i==0)
        {
            // printf("%d ",i);
            if(a%i)
            return 0;
            b/=i;
        }
        i+=2;
    }
        return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        if(check(a,b))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
