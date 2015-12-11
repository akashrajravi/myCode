#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
void scanint(int&x)
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
    scanint(t);
    while(t--)
    {
        int n,m,i,x;
        ll s1=0,s2=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            scanint(x);
            s1+=x;
        }
        for(i=m;i<n;i++)
        {
            scanint(x);
            s2+=ceil(x/2);
        }
        if(s2>s1)
        cout<<"DEFEAT"<<endl;
        else
        cout<<"VICTORY"<<endl;
    }
    return 0;
}
