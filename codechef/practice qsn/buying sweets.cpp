#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,x,y,sum=0,min=100;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(min>a[i])
            min=a[i];
        }
        x=sum/k;
        if(sum%k==0)
        cout<<x<<endl;
        else
        {
            y=(sum-min)/k;
            if(x==y)
            cout<<-1<<endl;
            else
            cout<<sum/k<<endl;
        }
    }
    return 0;
}
