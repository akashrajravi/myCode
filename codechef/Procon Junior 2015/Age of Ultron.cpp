#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,cnt=0;
        cin>>n;
        while(n%2==0)
        {
            cnt++;
            n/=2;
        }
        for(i=3;i*i<=n;i+=2)
        {
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
        }
        if(n>2)
            cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
