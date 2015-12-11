#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    if(n%2==0)
     return 0;
    for(i=3;i*i<=n;i+=2)
    if(n%i==0)
    return 0;
    return 1;
}
int plindrom(int n)
{
    int temp=0,i=n;
    while(n>0)
    {
        temp*=10;
        temp+=n%10;
        n/=10;
    }
    if(i==temp)
        return 1;
    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
        if(n>=100000)
        {
            printf("1003001\n");
        return 0;
        }
        if(n%2==0)
            n++;
        for(i=n;;i+=2)
        {
            if(prime(i)&& plindrom(i))
            {
                printf("%d\n",i);
                break;
            }
        }
    return 0;
}
