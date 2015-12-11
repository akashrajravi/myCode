#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum;
        cin>>n;
        if(n&1)
        {
            sum=-n/2;
            sum+=n;
            cout<<sum<<endl;
        }
        else
        cout<<-n/2<<endl;
    }
    return 0;
}
