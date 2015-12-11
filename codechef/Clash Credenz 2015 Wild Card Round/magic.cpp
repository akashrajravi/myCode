#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,x,y;
        cin>>n;
        ll a[n],j,b[10000],k=0,m=0,flag=0;
        memset(b,0,sizeof(b));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m=max(m,a[i]);

        }
        //cout<<m<<endl;
        for(i=0;i<n;i++)
        {
            if(m%a[i]!=0)
               {
                    flag=1;
                    break;
               }
        }
        if(!flag)
        {
            if(sqrt(m)*sqrt(m)==m)
                cout<<m<<endl;
            else
                cout<<m*m<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
        {
            x=a[i];
            for(j=2;j<=a[i]/2;j++)
            {
                if(x%j==0)
                {
                    b[j]++;

                    while(x%j==0)
                        x/=j;
                }
                if(x<=1)
                    break;
            }
            if(x>2)
            {
                b[x]++;
            }
        }
        x=1;
          for(i=0;i<10000;i++)
            {
                if(b[i])
                x=(x*i)%mod;
                //cout<<x<<" ";
            }
        cout<<(x*x)%mod<<endl;
        }

    }
    return 0;
}
