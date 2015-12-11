#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,mx=0;
        cin>>n;
        float x[n],y[n],temp=99999999;
        float r;
        map<float,int>mp;
        map<float,int>::iterator it;
        for(i=0;i<n;i++)
        cin>>x[i]>>y[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(x[j]!=x[i])
                 {
                     r=abs((y[j]-y[i])/(x[j]-x[i]));
                    mp[r]++;
                 }
                 else
                    mp[temp]++;
            }
        }
        for(it=mp.begin();it!=mp.end();it++)
        mx=max(mx,it->second);
        cout<<mx<<endl;
    }
    return 0;
}
