#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        cnt=n/26;
        if(n%26)
            cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
