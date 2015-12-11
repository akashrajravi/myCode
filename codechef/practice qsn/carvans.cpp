#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x;
        cin>>n;
        int a[n],cnt=1;
        for(i=0;i<n;i++)
        cin>>a[i];
        x=a[0];
        for(i=1;i<n;i++)
        {
            if(x>a[i])
            {
                cnt++;
                x=a[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
