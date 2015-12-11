#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,k,n,i,j=0,min=1000;
        scanf("%d%d%d%d",&x,&y,&k,&n);
        int p[n],c[n],a[n];
        for(i=0;i<n;i++)
        a[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&p[i],&c[i]);
            if(p[i]>=(x-y))
            {
                a[j]=c[i];
                j++;
            }
        }
        if((x-y)==0)
            printf("LuckyChef\n");
        else if(a[0]==0)
            printf("UnluckyChef\n");
        else
        {
            for(i=0;i<j;i++)
            {
                if(a[i]<=k)
                {
                    printf("LuckyChef\n");
                    min=1;
                    break;
                }
            }
            if(min!=1)
            printf("UnluckyChef\n");
        }
    }
    return 0;
}
