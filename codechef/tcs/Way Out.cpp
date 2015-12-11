// bit_hack
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h,l,u,i,j,sum=0,min1;
        cin>>n>>h;
        ll a[n];
        for(i=0;i<n;i++)
           a[i]=n;
        for(i=0;i<n;i++)
        {
            cin>>l>>u;
            for(j=l;j<=u;j++)
            a[j]--;
        }
        for(i=0;i<h;i++)
        sum+=a[i];
        min1=sum;
        for(i=1;i<=n-h;i++)
        {
            sum=sum-a[i-1]+a[h+i-1];
           min1=min(min1,sum);
        }
        cout<<min1<<endl;
    }
    return 0;
}
