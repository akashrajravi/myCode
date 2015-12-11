#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=1,b=2,c=3;
        while(n>0)
        {
            a=b;
            b=c;
            c=a+b;
            n-=(c-b-1);
        }
        n+=(c-b-1);
        cout<<b+n<<endl;
    }
    return 0;
}
