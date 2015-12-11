#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i,j=1,ans=0,min=INT_MAX;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            ans+=a[i];
            if(a[i]<2)
            j=0;
            if(a[i]<min)
                min=a[i];
        }
        if(j==0)
        printf("-1\n");
        else
        printf("%d\n",ans-min+2);
    }
    return 0;
}
