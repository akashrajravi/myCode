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
    int b[k+1],c[k+1];
    for(i=1;i<=k;i++)
    cin>>b[i];
    cin>>q;
    //map<int,int>mp;
    //map<int,int>::iterator it;

    while(q--)
    {
        sum=0;
        cin>>x>>y;
        memset(c,0,sizeof(c));
        while(y--)
        {
            if(c[b[x]]==0)
            {
                c[b[x]]=1;
                sum+=a[b[x]];
            }
            if(x==k)
                x=1;
            else
                x++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
