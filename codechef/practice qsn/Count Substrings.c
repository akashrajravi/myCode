#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,count=0,i;
        scanf("%lld",&n);
        char str[n+1];
        scanf("%s",str);
        for(i=0;i<n;i++)
        {
            if(str[i]=='1')
            count++;
        }
        printf("%lld\n",count*(count+1)/2);
    }
    return 0;
}
