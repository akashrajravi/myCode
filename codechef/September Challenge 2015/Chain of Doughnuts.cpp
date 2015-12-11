//bit_hack
//04-09-2015
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}
int main()
{
    int t;
    //cin>>t;
    scanint(t);
    while(t--)
    {
        int n,i,cnt,ans=0,m,x;
        //cin>>n>>m;
        scanint(n);
        scanint(m);
        int a[m];
        for(i=0;i<m;i++)
        {
            scanint(x);
            a[i]=x;
        }
       // cin>>a[i];
        cnt=m-1;
        i=0;
        sort(a,a+m);
        while(cnt>0)
        {
            if(cnt>=a[i])
            {
                ans+=a[i];
                cnt-=(a[i]+1);
            }
            else
            {
                ans+=cnt;
                break;
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
