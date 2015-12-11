#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,max1=-1;
        cin>>n>>k;
        for(i=1;i<=k;i++)
            max1=max(max1,n%i);
        cout<<max1<<endl;
    }
    return 0;
}
