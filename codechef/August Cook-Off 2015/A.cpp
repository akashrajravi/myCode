#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        int flag=1,i,n;
        cin>>a>>b;
        n=a.length();
        for(i=0;i<n;i++)
        {
            if(a[i]!='?' && b[i]!='?' && a[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}
