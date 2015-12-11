#include<stdio.h>
int cmpr(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    int a[t],i;
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);
    qsort(a,t,sizeof(int),cmpr);
    for(i=0;i<t;i++)
    printf("%d\n",a[i]);
    return 0;
}
