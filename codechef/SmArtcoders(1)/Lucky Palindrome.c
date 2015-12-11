#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        if(n%2)
        printf("%lld\n",n-1);
        else
        printf("%lld\n",n);
    }
    return 0;
}
