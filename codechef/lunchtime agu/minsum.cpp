#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,m;
        cin>>n;
        ll a[n];
        cin>>a[0];
        m=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            m=min(m,a[i]);
        }
        cout<<(n-1)*m<<endl;
    }
    return 0;
}
