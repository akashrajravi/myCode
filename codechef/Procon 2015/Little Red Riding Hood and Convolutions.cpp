#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,x,cnt=0;
        cin>>n;
        int a[n];
        if(n&1 || n<=4)
        {
            for(i=0;i<n;i++)
                cin>>x;
            //cout<<"-1"<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>x;
                a[i]=x;
                if(x==-1)
                cnt++;
            }
            if(cnt%2==1)
            {
                if(a[0]==-1)
                {
                    cout<<"1";
                    for(i=1;i<n;i++)
                    cout<<" -1";
                    cout<<endl;
                }
                else
                {
                    cout<<"-1";
                    for(i=1;i<n;i++)
                    cout<<" 1";
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}
