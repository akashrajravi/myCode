#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        long long sum = 0;
        cin>>n;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                 sum+=i;
            if(i != n/i)
                sum+=n/i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

