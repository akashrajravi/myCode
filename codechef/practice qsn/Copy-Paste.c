#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,max=0,cnt=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(max<a[i])
            max=a[i];
        }
        int b[max+1];
        for(i=0;i<=max;i++)
        b[i]=0;
        for(i=0;i<n;i++)
        b[a[i]]++;
        for(i=0;i<=max;i++)
        {
            if(b[i]!=0)
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
