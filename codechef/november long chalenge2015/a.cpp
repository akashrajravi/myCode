#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m)
{
    return (m==0?n:gcd(m,n%m));
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,cnt;
        scanf("%d%d",&n,&m);
        cnt=gcd(n,m);
        if(n/cnt!=n)
            printf("No %d\n",n/cnt);
        else
            printf("Yes\n");
    }

    return 0;
}
