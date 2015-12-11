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
int gcd(int n,int m)
{
    return (m==0?n:gcd(m,n%m));
}
int main()
{
    int t,j;
    scanint(t);
    while(t--)
    {
        int n,i=1,m;
        ll ans=0;
        scanint(n);
        if(n&1)
        {
            m=n<<1;
            while(i<=m)
            {
                ans+=(n/gcd(n,i));
                i++;
            }
            ans*=2;
            ans+=1;
        }
        else
        {
            m=n<<1;
            m-=1;
            while(i<=m)
            {
                ans+=(n/gcd(n,i));
                i++;
            }
            ans*=2;
            ans+=3;
        }
        cout<<ans<<endl;
    }
    return 0;
}
