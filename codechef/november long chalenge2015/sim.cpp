#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}*/
int phi(int n)
{
    int result = n;   // Initialize result as n

    // Consider all prime factors of n and subtract their
    // multiples from result
    for (int p=2; p*p<=n; ++p)
    {
        // Check if p is a prime factor.
        if (n % p == 0)
        {
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;
    return result;
}
int main()
{
    int t,j;
    cin>>t;
    while(t--)
    {
        int n,i=1,m;
        int ar[10000];
        ll ans=0;
        cin>>n;
        //scanint(n);
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                ans+=(phi(n/i)*n)/i;
            }
        }

        cout<<ans+1<<endl;
    }
    return 0;
}
