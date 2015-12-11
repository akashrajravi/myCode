#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,s,m,sum,s1;
        scanf("%lld%lld",&n,&s);
        sum=(n*(n+1))/2;
        s1=s;
        s-=n;
        m=1;
        while(s>=m)
        {
            s-=m;
            m+=1;
        }
        if(sum==s1)
            printf("0\n");
        else
        printf("%lld\n",n-m);
    }
    return 0;
}
