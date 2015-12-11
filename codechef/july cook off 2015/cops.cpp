#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,x,y,a,i,j,temp,ans=0,mul,flag[100];
        memset(flag,1,sizeof(flag));
        for(i=0;i<100;i++)
           flag[i]=1;
        cin>>m>>x>>y;
        mul=x*y;
        for(j=0;j<m;j++)
        {
            cin>>a;
            temp=mul;
            flag[a-1]=0;
            for(i=a;i<100 && temp>0;i++,temp--)
                flag[i]=0;
            temp=mul;
            for(i=a-2;i>=0 && temp>0;i--,temp--)
                flag[i]=0;

        }
        //sort(a,a+m);
        for(i=0;i<100;i++)
        {
            //cout<<flag[i]<<" ";
            if(flag[i]==1)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
