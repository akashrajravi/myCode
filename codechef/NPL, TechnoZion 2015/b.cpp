#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,even=0,odd=0,x;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(i&1)
            even+=x;
            else
            odd+=x;
        }
        cout<<max(even,odd)<<endl;
    }
    return 0;
}
