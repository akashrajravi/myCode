#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n],cnt=1,i;
        for(i=0;i<n;i++)
        cin>>a[i];
        m=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<m)
            {
                m=a[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
