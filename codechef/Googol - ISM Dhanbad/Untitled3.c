#include<stdio.h>
int min(long long int a,long long int b)
{
    if(a>=b)
    return b;
    else
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n],i,x=0,y1,y,x1=0,ans,j;
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    y1=a[0];
    for(i=1;i<n;i++)
    {
        if(y1>a[i])
        x1++;
        else
        y1=a[i];
    }
    for(i=1;i<n/2;i++)
    {
        x=0;
        y=a[i];
        for(j=i+1;j<n;j++)
        {
            if(y>a[j])
                x++;
            else
                y=a[j];
        }
        x1=min(x1,x+i);
    }
    printf("%lld\n",x1);
    return 0;
}
