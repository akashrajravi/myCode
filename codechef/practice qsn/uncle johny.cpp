#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,ans=1,k;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        cin>>k;
        for(i=0;i<n;i++)
            if(a[i]<a[k-1])
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
