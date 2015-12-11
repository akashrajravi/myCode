#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=1,sum=0,temp,j,c1=0,c2;
        cin>>n;
        int a[n],b[n],d[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=n)
            c=0;
            sum+=a[i];
            b[i]=0;
            if(a[i]!=0)
                c2=i+1;
        }
        if(c==0 || sum!=n)
        cout<<-1;
        else
        {
            for(i=0;i<n;i++)
            {
                c=a[i];
                if(c!=0)
                {

                    for(j=n-1;j>=0;j--)
                    {
                        if(b[j]==0 && j!=i && c!=0)
                        {
                            b[j]=i+1;
                            c--;
                        }
                        if(c==0)
                        break;
                    }
                }
                if(a[n-1]!=0 && b[0]==0 && n%2)
                    b[n-1]=c2;
            }
            if(b[n-1]==n)
            {
                temp=b[0];
                b[0]=b[n-1];
                b[n-1]=temp;
            }
            for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
