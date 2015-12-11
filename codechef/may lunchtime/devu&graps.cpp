#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll i,n,k,x,sum=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            x=a[i]%k;
            if(a[i]==0)
                sum+=k;
            else if(a[i]<k)
                sum+=(k-a[i]);
            else
            sum+=min(x,k-x);
        }
        cout<<sum<<endl;
    }
    return 0;
}
