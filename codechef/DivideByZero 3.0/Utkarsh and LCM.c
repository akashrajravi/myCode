#include<stdio.h>
int main()
{
    long long int n,i,j,count=0,max=0,c=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    if(max<=a[i])
    max=a[i];
    long long int a1[max+1],a2[max+1];
    for(i=0;i<=max;i++)
        {
            a1[a[i]]++;

        }
    for(i=0;i<=max;i++)
    {
        if(a1[i]!=0)
        {
            c+=a1[i];
            a2[i]=c;
        }

    }
    for(i=1;i<=max;i++)
    {
        if(a1[i]!=0)
        count+=a1[i]*(n-a2[i]);
        printf("%lld  \n",count);
    }
    printf("%lld\n",count);
    return 0;
}
