//bit_hack
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a[35],i;
    a[0]=1;
    a[1]=1;
    for(i=2;i<=32;i++)
        a[i]=2*a[i-1];
    for(i=1;i<=32;i++)
        a[i]-=1;
    cin>>t;
    while(t--)
    {
        long long n,x,i,s=1,flag=1;
        cin>>n;
        if(n==1)
            cout<<2<<endl;
        else
        {
            for(i=2;i<=32;i++)
        {
            if(a[i]==n)
            {
                cout<<n/2<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<-1<<endl;
        }

    }
    return 0;
}
