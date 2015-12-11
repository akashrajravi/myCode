#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i,k,n;
        cin>>n;
        if(n%2 || n==0)
        cout<<0<<endl;
        else
        {
            if(n==2)
                cout<<9<<endl;
            else
            {
                cout<<9;
                for(i=2;i<=n/2;i++)
                cout<<0;
                cout<<endl;
            }
        }
    }
    return 0;
}
