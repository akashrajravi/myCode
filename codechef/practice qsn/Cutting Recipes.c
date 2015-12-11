#include<stdio.h>
int hcf(int a,int b)
{
    while(a!=b)
    {
        if(a%b==0)
        return b;
        else if(b%a==0)
        return a;
        else if(a>b)
        return hcf(a-b,b);
        else if(b>a)
        return hcf(a,b-a);
    }
    return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,ans,i;
        scanf("%d",&n);
        int a[n];
        scanf("%d",&a[0]);
        ans=a[0];
        for(i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            ans=hcf(ans,a[i]);
        }
        for(i=0;i<n;i++)
        printf("%d ",a[i]/ans);
        printf("\n");
    }
    return 0;
}
