#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,m,sum;
        scanf("%ld%ld",&n,&m);
        sum=(n*(n+1))/2;
        sum-=m;
        if(sum<2)
        printf("-1\n");
        else
            printf("%ld\n",sum-1);
    }
    return 0;
}
