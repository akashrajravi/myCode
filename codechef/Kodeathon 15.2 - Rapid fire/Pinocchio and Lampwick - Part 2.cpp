#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max1=0,m,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max1)
            max1=a[i];
        }
        int b[max1+1];
        for(i=0;i<=max1;i++)
            b[i]=0;
        for(i=0;i<n;i++)
            b[a[i]]++;
        m=b[0];
        for(i=1;i<=max1;i++)
        {
            if(b[i]>=m)
            m=b[i];
        }
        cout<<m-1<<endl;
    }
    return 0;
}
