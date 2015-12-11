#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0,cnt1=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i])
            cnt1++;
            else
                cnt++;
        }
        if(cnt1%2)
        cout<<cnt1<<endl;
        else
        cout<<cnt<<endl;
    }
    return 0;
}
