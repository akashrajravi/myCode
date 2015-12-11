#include<stdio.h>
int gcd1(long long int a,long long int b)
{
    if(a%b==0)
    return b;
    else
    return gcd1(b,a%b);
}
int main()
{
    long long int n,q,i,l,r,max,temp;
    scanf("%lld%lld",&n,&q);
    long long int arr[100001],arr1[100001];
    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    while(q--)
    {
        max=0;
        scanf("%lld%lld",&l,&r);
        l--;
        for(i=l;i<r;i++)
        {
            arr1[i]=arr[i];
            if(max<=arr[i])
            max=arr[i];
        }
        if(l==r-1)
        temp=arr[l];
        else
        {
            for(i=l;i<r;i++)
            {
                temp=gcd1(arr1[i],arr1[i+1]);
                arr1[i+1]=temp;
            }
        }

        printf("%lld %lld\n",max,temp);
    }
    return 0;
}
