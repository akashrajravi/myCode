#include<stdio.h>
int path1(long long int m,long long int n)
{
    long long int count[m][n],i,j,an;
    for (i=0;i<m;i++)
        count[i][0]=1;
    for (j=0;j<n;j++)
        count[0][j]=1;
    for (i=1;i<m;i++)
    {
        for (j=1;j<n;j++)
            {
                count[i][j]=count[i-1][j]+count[i][j-1];
            }
    }
    return count[m-1][n-1];
}
int main()
{
    long long int x,y,ans;
    scanf("%lld%lld",&x,&y);
    ans=path1(x+1,y+1);
    printf("%lld\n",ans);
    return 0;
}
