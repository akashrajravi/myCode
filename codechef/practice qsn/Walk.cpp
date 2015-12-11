#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,m;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        m=a[0];
        for(i=1;i<n;i++)
        m=max(m,a[i]+i);
        cout<<m<<endl;
    }
    return 0;
}
