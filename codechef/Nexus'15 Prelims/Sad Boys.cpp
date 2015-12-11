#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,mx=0,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        for(i=0;i<n;i++)
        sum+=(mx-a[i]);
        cout<<sum<<endl;
    }
    return 0;
}
