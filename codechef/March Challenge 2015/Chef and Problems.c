#include<stdio.h>
int main()
{
    int n,k,m,i;
    scanf("%d%d%d",&n,&m,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(k--)
    {
        int l,r,j,t[m],max=0;
        scanf("%d %d",&l,&r);
        for(i=0;i<m;i++)
            t[i]=0;
        for(i=l;i<=r;i++)
        {
            for(j=r;j>=i;j--)
                if(a[j-1]==a[i-1])
                {
                    if(t[a[i-1]-1]==0)
                    t[a[i-1]-1]=(j-i);
                }
        }
        for(i=0;i<m;i++)
        {
            if(max<=t[i])
                max=t[i];
        }
        printf("%d\n",max);
    }
    return 0;
}
