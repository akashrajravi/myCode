#include<bits/stdc++.h>
using namespace std;
int cmpr(int a,int b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        double ans=0,sum=0;
        cin>>n>>k;
        int a[n],e[k],x=n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(i=0;i<k;i++)
        cin>>e[i];
        sort(e,e+k,cmpr);
        for(i=0;i<k;i++)
        {
            ans+=((sum*e[i])/(100*x));
            x--;
        }
        cout<<setprecision(3)<<fixed<<ans<<endl;
    }
    return 0;
}
