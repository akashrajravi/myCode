#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,k,ans=0,l,m;
        scanf("%d",&n);
        int a[n][n];
        for(i=0;i<n;i++)
        for(k=0;k<=i;k++)
            scanf("%d",&a[i][k]);
        for(i=n-2;i>=0;i--)
        for(k=0;k<=i;k++)
        {
            if(a[i+1][k]>a[i+1][k+1])
                a[i][k]+=a[i+1][k];
            else
                a[i][k]+=a[i+1][k+1];
        }
        printf("%d\n",a[0][0]);
    }
    return 0;
}
