#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m)
{
    return (m==0?n:gcd(m,n%m));
}
int main()
{
    int t,j;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        long long sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        sum+=(n/gcd(n,i));
        printf("%lld\n",sum);
    }
    return 0;
}
