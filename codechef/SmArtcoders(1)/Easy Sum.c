#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,s;
        scanf("%lld",&n);
        s=n*(n+1)/2;
        printf("%lld\n",s);
    }
    return 0;
}
