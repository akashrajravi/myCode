#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,m=0;
        scanf("%d",&n);
        int a[n],max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=m)
                m=a[i];
        }
        int a1[m];
        for(i=0;i<m;i++)
            a1[i]=0;
        for(i=0;i<n;i++)
        a1[a[i]-1]++;
        for(i=0;i<m;i++)
        {
            if(max<=a1[i])
            max=a1[i];
        }

        printf("%d\n",n-max);
    }
    return 0;
}
