#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        ll a[n],ans,sum=0,x,y;
        for(i=0;i<n;i++)
        cin>>a[i];
        ans=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>ans)
            {
                ans=a[i];
                x=i;
                y=i;
            }
        }
        if(ans<0)
        cout<<x<<y<<endl;
        else
        {
            ans=0;
            for(i=0;i<n;i++)
            {
                if(sum+a[i]>0)
                sum+=a[i];
                else
                    sum=0;
                ans=max(ans,sum);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
