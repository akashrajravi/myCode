#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d,i,sum=0,temp=0;
        scanf("%d%d",&n,&d);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        temp=sum+10*(n-1);
        if(d<temp)
        printf("-1\n");
        else
        {
            d-=sum;
            printf("%d\n",d/5);
        }
    }
    return 0;
}
