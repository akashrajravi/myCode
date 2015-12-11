#include<bits/stdc++.h>
using namespace std;
#define ll long long
int getsum(ll a)
{
     ll temp=0;
    while(1)
    {
        while(a)
        {
            temp+=(a%10);
            a/=10;
        }
        while(temp)
        {
            a+=(temp%10);
            temp/=10;
        }
        if(a<10)
            break;
    }
    return a;
}
int main()
{
        ll a=20,d=5,l,r,sum=0,ans=0,i,ar[10],span,temp,j;
        for(i=0;i<100;i++)
        {
            cout<<a+i*d<<" "<<getsum(a+i*d)<<endl;

        }

    return 0;
}
