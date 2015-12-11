#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,i,j,temp,t=0;
        scanf("%lld%lld",&n,&m);
        long long int a[m];
        for(i=0;i<m;i++)
        scanf("%lld",&a[i]);
        for(i=0;i<m;i++)
        for(j=i;j<m;j++)
        {
            if(a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        for(i=0;i<m-1;i++)
        {
            if((a[i+1]-a[i])==1)
            {
                t++;
                if(t>=2)
                    break;
            }
            else
                t=0;
        }
        if(t==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
