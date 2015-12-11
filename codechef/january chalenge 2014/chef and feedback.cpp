#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        int i,n,flag=0;
        cin>>a;
        n=a.length();
        for(i=1;i<n-1;i++)
        {
            if(((a[i-1]-'0')==0 && (a[i]-'0')==1 && (a[i+1]-'0')==0) || ((a[i-1]-'0')==1 && (a[i]-'0')==0 && (a[i+1]-'0')==1))
            {
                flag=1;
                break;
            }
        }
        if(flag)
        cout<<"Good"<<endl;
        else
        cout<<"Bad"<<endl;
    }
    return 0;
}
