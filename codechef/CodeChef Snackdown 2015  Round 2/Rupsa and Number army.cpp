#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,min=0,max=0,k=0,m;
        cin>>n;
        int a[n];
        cin>>a[0];
        m=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(m<a[i])
            m=a[i];
        }
        int b[m+1],c[m+1];
        for(i=0;i<=m;i++)
        b[i]=0;
        for(i=0;i<n;i++)
        b[a[i]]=1;
        for(i=1;i<=m;i++)
        {
            if(b[i]==0)
            {
            continue;
            }
            if(b[i])
            k++;
            if(k==3)
            {
                b[i-2]=b[i-1]=b[i]=0;
                min++;
                k=0;
            }
        }
        k=0;
         for(i=1;i<=m;i++)
        {
            if(b[i]==0)
            {
            continue;
            }
            if(b[i])
            k++;
            if(k==2)
            {
                b[i-1]=b[i]=0;
                min++;
                k=0;
            }
        }

        k=0;
         for(i=1;i<=m;i++)
        {
            if(b[i]==0)
            {
            continue;
            }
            if(b[i])
            min++;
         }
        k=0;


        for(i=1;i<=m;)
        {
            if(b[i]==0)
            {
            continue;
            }
            if(b[i] || b[i+1])
            {
                max++;
                i+=2;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
