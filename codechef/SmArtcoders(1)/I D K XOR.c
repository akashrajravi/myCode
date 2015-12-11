#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,i,j,ans=0;
        scanf("%ld",&n);
        long int a[n];
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            if((a[i]^a[j])%2)
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
