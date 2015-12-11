#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,s1=0,s2=0;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(i%2==0)
            s1+=a[i];
            else
            s2+=a[i];
        }
        if(s1>s2)
        printf("%lld\n",s1);
        else
        printf("%lld\n",s2);
    }
    return 0;
}
