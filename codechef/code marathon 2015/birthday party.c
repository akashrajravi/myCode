#include<stdio.h>
void merge(int a[],int b[],int min,int mid,int max)
{
    int i=min,j=mid+1,index=min,temp[max+1],t[max+1];
    while(i<=mid && j<=max)
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            t[index]=b[i];
            index++;
            i++;
        }
        else
        {
            temp[index]=a[j];
            t[index]=b[j];
            index++;
            j++;
        }
    }
    if(i<mid+1)
    {
        while(i<=mid)
        {
            temp[index]=a[i];
            t[index]=b[i];
            index++;
            i++;
        }
    }
    else
    {
        while(j<=max)
        {
            temp[index]=a[j];
            t[index]=b[j];
            index++;
            j++;
        }
    }
    for(i=min;i<index;i++)
    {
        a[i]=temp[i];
        b[i]=t[i];
    }
}
void merge_sort(int a[],int b[],int min,int max)
{
    int mid;
    if(min<max)
    {
        mid=(max+min)/2;
        merge_sort(a,b,min,mid);
        merge_sort(a,b,mid+1,max);
        merge(a,b,min,mid,max);
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,q,i,a[100000],b[100000],t,count,j;
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
        merge_sort(a,b,0,n-1);
        while(q--)
        {
            scanf("%d",&t);
            i=0;
            count=0;
            for(i=0;i<n;i++)
            printf("%d %d\n",a[i],b[i]);
            while(a[i]!=t && i<n)
            i++;
            if(i!=0)
            {
                for(j=i;j<n;j++)
                {
                    if(a[j]==t)
                    count++;
                    else
                    break;
                }
            }
            else
            {
              for(i=0;i<n;i++)
                    if(b[i]>t&&)
            }

            for(j=0;j<i;j++)
            {
                if(b[j]>=t)
                count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
