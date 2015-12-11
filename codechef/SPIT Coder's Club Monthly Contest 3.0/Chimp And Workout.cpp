#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,mn=0,mx=0,j=0,flag=1;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        mx=a[n-1];
        mn=a[0];
        j=n-1;
        i=0;
        while(j>i)
        {
            mx+=abs(a[j]-a[i]);
            if(flag)
            {
                flag=0;
                j--;
            }
            else
            {
                flag=1;
                i++;
            }
        }
        cout<<mx<<endl;
        for(i=0;i<n-1;i++)
        mn+=a[i+1]-a[i];
        cout<<mx<<" "<<mn<<endl;
    }
    return 0;
}
