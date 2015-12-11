#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000000];
        long long int i,n,ans[10];
        scanf("%s",s);
        n=strlen(s);
        for(i=0;i<10;i++)
        ans[i]=0;
        for(i=0;i<n;i++)
            ans[(int)s[i]-48]++;
        printf("%lld\n",ans[4]);
    }
    return 0;
}
