#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,i,cnt=0,l,m,j,x;
    cin>>n>>k;
    ll a[n],b[n+1];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
        b[i]=n-i+1;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]%a[j]==k)
            {
                x=1;
               for(l=j-i+1;l<=n;l++)
                    {
                        b[l]-=x;
                        x++;
                        if(b[l]<=0)
                            break;
                    }
                    break;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(b[i]<=0)
            break;
        cnt+=b[i];
    }
    cout<<cnt<<endl;
    return 0;
}
