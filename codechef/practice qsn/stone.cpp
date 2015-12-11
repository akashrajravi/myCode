#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,i,m;
    cin>>n>>k;
    ll a[n];
    cin>>a[0];
    m=a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(m<a[i])
        m=a[i];
    }
    if(k==0)
    {
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
    else
    {
         for(i=0;i<n;i++)
            a[i]=m-a[i];
        if(k&1)
        {
            for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        }
        else
        {
            m=a[0];
            for(i=1;i<n;i++)
                if(m<a[i])
                    m=a[i];
            for(i=0;i<n;i++)
            cout<<m-a[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
