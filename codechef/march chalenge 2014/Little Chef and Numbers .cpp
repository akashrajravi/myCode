#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans,x,y=0,z=0,i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x==0|| x==1)
            y++;
            else if(x==2)
            z++;
        }
        n=n-(y+z);
        ans=n*(n-1)/2;
        ans+=n*z;
        cout<<ans<<endl;
    }
    return 0;
}
