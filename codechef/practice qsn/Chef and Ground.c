#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i;
        scanf("%d%d",&n,&m);
        int a[n],max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=max)
            max=a[i];
        }
        for(i=0;i<n;i++)
        {
            if(m<0)
            break;
            else
            m-=(max-a[i]);
        }
        if(m<0)
        printf("No\n");
        else
        {
            if(m%n)
            printf("No\n");
            else
            printf("Yes\n");
        }
    }
    return 0;
}
