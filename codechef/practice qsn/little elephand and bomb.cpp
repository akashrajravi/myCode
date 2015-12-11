#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,cnt=0;
        string a;
        cin>>n>>a;
        if(n==1 && !(a[0]-'0'))
            cnt++;
        else if(n==1 && (a[0]-'0'))
            cnt=0;
        else
        {
            if(!(a[0]-'0') && !(a[1]-'0'))
                cnt++;
            for(i=1;i<n-1;i++)
            {
                if(!(a[i-1]-'0') && !(a[i]-'0') && !(a[i+1]-'0'))
                cnt++;
            }
            if(!(a[n-2]-'0') && !(a[n-1]-'0'))
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
