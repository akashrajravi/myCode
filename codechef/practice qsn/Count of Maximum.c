#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n],max=INT_MIN,m=0,num,min=INT_MAX,c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
            max=a[i];
            if(a[i]<min)
            min=a[i];
        }
        if(min<0)
            c=-min;
        int b[max+c+1];
        for(i=0;i<=max+c;i++)
        b[i]=0;
        for(i=0;i<n;i++)
        b[a[i]+c]++;
        for(i=0;i<=max+c;i++)
        {
            //printf("%d ",b[i]);
            if(b[i]>m)
            {
                m=b[i];
                num=i-c;
            }
            else if(b[i]==m)
            {
                if(num>i-c)
                num=i-c;
            }
        }
        printf("%d %d\n",num,m);
    }
    return 0;
}
