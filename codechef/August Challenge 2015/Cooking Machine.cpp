#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,cnt=0;
        cin>>a>>b;
        while(a!=b)
        {
            if(a&1 && a!=1)
            {
                a/=2;
                cnt++;
            }
            if(a==1 || b==1 || a==b)
                break;
            if(b>a && a%2==0)
            {
                while(b>a && a%2==0)
                {
                    b/=2;
                    cnt++;
                }
            }
            if(a>b && a%2==0)
            {
                while(a>b && a%2==0)
                {
                    a/=2;
                    cnt++;
                }
            }
            //cout<<1;
        }
        if(a==1 && a!=b)
        {
            while(b!=1)
            {
                b/=2;
                cnt++;
            }
        }
        else if(b==1 && a!=b)
        {
            while(a!=1)
            {
                a/=2;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
