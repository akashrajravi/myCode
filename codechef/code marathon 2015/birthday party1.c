#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,q,i,a[100000],b[100000],t,count=0,j;
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
        while(q--)
        {
            scanf("%d",&t);
            count=0;
            for(i=0;i<n;i++)
            {
                if(t>=a[i]&&t<=b[i])
                count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
