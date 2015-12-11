#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int num,i,cnt=0;
        scanf("%lld",&num);
        long long a[num];
        for(i=0;i<num;i++)
            scanf("%lld",&a[i]);
        if(a[0]!=a[1])
            cnt++;
        for(i=1;i<num;i++)
        {
            if(a[i]!=a[i+1]&&i<num-1)
            cnt++;
            else if(a[i]!=a[i-1])
            cnt++;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
