#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}*/

/*ll power(int x,int y,int n)
{
    ll res=1;
    while(y)
    {
        if(y&1)
        res=(res*x)%n;
        y/=2;
        x=(x*x)%n;
    }
    return res;
}*/
int main()
{
    int t,n;
    cin>>t>>n;
    while(t--)
    {
        int x,y,i,rem=1;
        cin>>x>>y;
        for(i=0;i<y;i++)
            rem=(rem*x)%n;
        cout<<rem%n<<endl;
        //cout<<power(x,y,n)<<endl;
    }
    return 0;
}
