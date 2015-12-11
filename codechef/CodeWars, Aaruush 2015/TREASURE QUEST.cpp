#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,q,x,y,sum,rot;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
    cin>>a[i];
    cin>>k;
    int b[k+1];
    for(i=1;i<=k;i++)
    cin>>b[i];
    cin>>q;
    map<int,int>mp;
    map<int,int>::iterator it;
    while(q--)
    {
        sum=0;
        cin>>x>>y;
        while(y--)
        {
            it=mp.find(a[b[x]]);
            if(it==mp.end())
            {
                sum+=a[b[x]];
                mp[a[b[x]]]++;
            }
            if(x==k)
                x=1;
            else
                x++;
        }
        cout<<sum<<endl;
        mp.clear();
    }
    return 0;
}
