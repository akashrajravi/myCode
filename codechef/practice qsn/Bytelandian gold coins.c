#include<stdio.h>
long long int max(long long int a,long long int b)
{
    return a>b?a:b;
}
long long int divide(long long int n)
{
    if(n<12)
        return n;
    else
        return max(n,divide(n/2)+divide(n/3)+divide(n/4));
}
int main()
{
    long long int n,ans;
    while(scanf("%lld",&n)!=EOF);
    ans=divide(n);
    printf("%lld\n",ans);
    return 0;
}
