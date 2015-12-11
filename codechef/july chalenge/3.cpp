#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,cnt=0,x,y=0,z=0;
        cin>>n>>k;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;)
        {
            x=a[i]-y;
            if(x<k && i<n-1)
            {
                z=k;
                cnt++;
                while(x<=z && i<n)
                {
                    if(z==x)
                        z=0;
                    else
                    z-=x+1;
                    i++;
                    x=a[i];
                }
                y=z;
            }
            else if(x>=k || i==n-1)
            {
                if(x%k==0)
                {
                    cnt+=x/k;
                    y=0;
                    i++;
                    x=a[i];
                }
                else
                {
                    cnt+=x/k+1;
                    y=k-x%k;
                    y-=1;
                    i++;
                    if(i==n)
                        break;
                    x=a[i];
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
