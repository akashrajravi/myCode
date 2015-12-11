#include<stdio.h>
int path(int m,int n)
{
   if (m==1 || n==1)
        return 1;
   return path(m-1,n)+path(m,n-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m;
        scanf("%d",&m);
        printf("%d\n",path(m+1,m+1));
    }
    return 0;
}
