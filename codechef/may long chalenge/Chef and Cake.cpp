#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(int argc, char* argv[])
{
    vector<int> arr(10000000);
    vector<int> ar(10000000);
    ll n,k,q;
    cin>>n>>k>>q;
    ll a,b,c,d,e,f,r,s,t,m,L,R,l1,la,lc,lm,d1,da,dc,dm,i,x,least,sum=0,prod=1,first;
    cin>>a>>b>>c>>d>>e>>f>>r>>s>>t>>m>>arr[0]>>l1>>la>>lc>>lm>>d1>>da>>dc>>dm;
    ar[0]=(t*t)%s;
    for(x=1;x<n-1;x++)
        ar[x]=(ar[x-1]*t)%s;
    for(i=1;i<n;i++)
    {
        if(ar[i-1]<=r)
        arr[i]=(((a*((arr[i-1]*arr[i-1])%m))%m)+((b*arr[i-1])%m)+c)%m;
        else
        arr[i]=(((d*((arr[i-1]*arr[i-1])%m))%m)+((e*(arr[i-1])%m)+f))%m;
        //cout<<arr[x]<<endl;
    }
    while(q--)
    {
        l1=((la*l1)%lm+lc)%lm;
        d1=((da*d1)%dm+dc)%dm;
        L=l1+1;
        R=min(L+k-1+d1,n);
        //cout<<L<<R;
        least=arr[L-1];
        for(i=L-1;i<R;i++)
        {
            if(least>arr[i+1])
            least=arr[i+1];
        }
        sum+=least;
        prod=(prod*least)%mod;
    }
    cout<<sum<<"  "<<prod<<endl;
    return 0;
}
