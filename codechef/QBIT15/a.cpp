#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0;
        cin>>n;
        int a[n];
        long long sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        sum/=2;
        i=n-1;
        while(sum>=0)
        {
            sum-=a[i];
            i--;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
