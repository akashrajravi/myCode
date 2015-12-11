#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,ans=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;)
        {
            if(a[i]!=a[i+1])
            {
                 if(i<=n-2)
                 {
                     if(a[i+1]==a[i+2])
                    {
                            ans+=2;
                            i+=2;
                    }
                    else if(a[i+1]!=a[i+2])
                    {
                        ans+=3;
                        i+=2;
                    }
                 }
                 else
                    {
                        ans+=2;
                        i++;
                    }
            }
            else
                i++;

        }
        printf("%d\n",ans);
    }
    return 0;
}
