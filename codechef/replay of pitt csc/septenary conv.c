#include<stdio.h>
void seventh(long long int n)
{
    if(!n)
    return ;
    seventh(n/7);
    printf("%lld",n%7);
}
int main()
{
    long long int n,i;
    scanf("%lld",&n);
    while(n!=-1)
    {
        seventh(n);
        printf(" ");
        scanf("%lld",&n);
    }
    return 0;
}
