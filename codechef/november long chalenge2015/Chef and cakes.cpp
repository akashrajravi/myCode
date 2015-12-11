//bit_hack
#include<bits/stdc++.h>
using namespace std;
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
    int t;
    scanint(t);
    while(t--)
    {
        int n,m,ans;
        scanint(n);
        scanint(m);
        ans=gcd(n,m);
        ans=n/ans;
        if(ans==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No "<<ans<<endl;
    }
    return 0;
}
