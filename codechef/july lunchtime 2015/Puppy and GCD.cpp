#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,i=3,sum=0,temp,j;
        cin>>n>>d;
        sum+=n/d;
        for(i=2*d;i<=n;)
        {
            for(j=i+d;j<=n;)
                {
                    if(gcd(i,j)==d)
                    sum++;
                    j+=d;
                }
            i+=d;
        }
        cout<<sum<<endl;
    }
    return 0;
}
