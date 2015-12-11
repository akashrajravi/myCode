#include<stdio.h>
#include<limits.h>
/*int cmpr(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}*/
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,sum=0,min=INT_MAX,k;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(min>a[i])
                {
                    min=a[i];
                    k=i;
                }
        }
        //qsort(a,n,sizeof(int),cmpr);
        for(i=0;i<n;i++)
        sum+=a[i]-a[k];
        printf("%d\n",sum);
    }
    return 0;
}
