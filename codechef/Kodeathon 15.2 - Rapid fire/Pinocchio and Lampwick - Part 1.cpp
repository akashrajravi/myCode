#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,i;
        cin>>n;
        int a[n];
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i-1]!=a[i])
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
