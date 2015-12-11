#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,cnt;
    ll ans;
    cin>>n;
    int a[n],i,x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cnt=0;
        if(a[i]%5==0)
        {
            x=a[i];
            if(x%10==0)
            {
                while(x%10==0)
                    x/=10;
            }
            if(x%5==0)
            {
                while(x%5==0)
                {
                    cnt++;
                    x/=5;
                }
                if(cnt & 1)
                {
                    cnt=cnt/2+1;
                    ans=(ll)a[i]*pow(4,cnt);
                    cout<<ans<<endl;
                }
                else
                {
                    cnt/=2;
                    ans=(ll)a[i]*pow(4,cnt);
                    cout<<ans<<endl;
                }
            }
            else
                cout<<a[i]<<endl;
        }
        else
        cout<<a[i]<<endl;
    }
    return 0;
}
