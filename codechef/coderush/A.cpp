#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[312000];
int main()
{
    ll t,j=1;
    for(j=1;j<=311000;j++)
    a[j-1]=j*(j+1)*(2*j+1)/6;
    cin>>t;
    while(t--)
    {
        ll n,i=0,sum;
        cin>>n;
        while(a[i]<=n)
        i++;
        cout<<i<<endl;
    }
    return 0;
}
