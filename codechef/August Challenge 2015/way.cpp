// bit_hack
    //Ravi
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}
int main()
{
    int t;
    scanint(t);
    //cin>>t;
    while(t--)
    {
        int n,h,l,u,i,x,y,j;
        ll sum=0,min1;

        //cin>>n>>h;
        scanint(n);
        scanint(h);
        int a[n+1];
        for(i=0;i<=n;i++)
           a[i]=0;
        for(i=0;i<n;i++)
        {
            //cin>>l>>u;
            scanint(l);
            scanint(u);
            a[l+1]++;
            a[u+2]--;
        }
        for(i=1;i<=n;i++)
           a[i]=a[i-1]+a[i];
        for(i=1;i<=n;i++)
           a[i]=n-a[i];
        for(i=1;i<=h;i++)
        sum+=a[i];
        min1=sum;
        for(i=2;i<=n-h+1;i++)
        {
            sum=sum-a[i-1]+a[h+i-1];
           min1=min(min1,sum);
        }
        cout<<min1<<endl;
    }
    return 0;
}
