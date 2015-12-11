#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,q,sum=0,l,r,temp;
    cin>>n>>q;
    ll a[n],b[n+1];
    memset(b,0,sizeof(b));
    for(i=0;i<n;i++)
        cin>>a[i];
    b[0]=0;
    for(i=0;i<n;i++)
        b[i+1]=b[i]+a[i];
    while(q--)
    {
        //temp=sum;
        cin>>l>>r;
        temp=b[r]-b[l-1];
        cout<<b[n]-temp<<endl;
    }
    return 0;
}
