#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    ll n,k,sum;
    cin>>t;
    while(t--)
    {
        ll cnt=0,i;
        cin>>n>>k;
        sum=(k*(k+1))/2;
        if(sum>=n)
        {
            if(k>=n)
            cnt=k-1;
            else
            {
                for(i=k;i>0;i--)
                {
                    if(n>i)
                    {
                        n-=i;
                        cnt++;
                    }
                    if(n==0)
                        break;
                }
                cout<<k-cnt<<endl;
            }
        }
        else
        cout<<-1<<endl;
    }
    return 0;
}
