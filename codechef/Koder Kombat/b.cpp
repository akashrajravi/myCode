#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
map<int,ll>mp;
map<int,ll>::iterator it;
int b0,b1,b2;
int result(int k)
{
    it=mp.find(k);
    if(it!=mp.end())
    return mp[k];
    mp[k]=(b0*result(k-3)+b1*result(k-2)+b2*result(k-1))%mod;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a0,k,q;
        cin>>b0>>b1>>b2>>a0>>a1>>a2;
        cin>>q;
        while(q--)
        {
            int k;
            cin>>k;
            mp.clear();
            mp[0]=a0;
            mp[1]=a1;
            mp[2]=a2;
            mp[3]=b0*a0+b1*a1+b2*a2;
            result(k);
            cout<<mp[k]<<endl;
        }
    }
    return 0;
}
