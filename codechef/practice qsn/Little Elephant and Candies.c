#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c,i,sum=0;
        scanf("%d%d",&n,&c);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(c<sum)
        printf("No\n");
        else
        printf("Yes\n");
    }
    return 0;
}
