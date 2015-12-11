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
int day(int d, int m, int y)
{
    int a[]={0,3,2,5,0,3,5,1,4,6,2,4};
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + a[m-1] + d) % 7;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,m,y;
        //cin>>d>>m>>y;
        scanint(d);
        scanint(m);
        scanint(y);
        cout<<day(d,m,y)<<endl;
    }
    return 0;
}
