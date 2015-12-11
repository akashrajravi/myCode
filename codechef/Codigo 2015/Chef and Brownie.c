#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j;
        scanf("%d%d",&n,&m);
        int a[n],l,r;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&l,&r);
            for(j=l;j<=r;j++)
            a[j-1]++;
        }
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
    }
    return 0;
}
