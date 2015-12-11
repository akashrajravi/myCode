#include<bits/stdc++.h>
using namespace std;
int ar[1000][1000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,x,y,l,c=1;
        long long cnt=0;
        map<int,int> mp;
        map<int,int>:: iterator it;
        cin>>n>>k;
        for(i=0;i<1000;i++)
            for(j=0;j<1000;j++)
            ar[i][j]=0;
            for(l=0;l<k;l++)
            {
                cin>>x>>y;
            i=x;
            j=y;
            while(i<=n && j<=n && i>=1 && j>=1)
            {
                for(it=mp.begin();it!=mp.end();it++)
                if(it->first==i && it->second ==j)
                    {
                        c=0;
                        break;
                    }
                if(c==1)
                    cnt++;
                else
                {
                    mp[i]=j;
                }
                i--;
                j--;
                c=1;
            }
            i=x;
            j=y;
            while(i<=n && j<=n && i>=1 && j>=1)
            {
                for(it=mp.begin();it!=mp.end();it++)
                if(it->first==i && it->second ==j)
                    {
                        c=0;
                        break;
                    }
                if(c==1)
                    cnt++;
                else
                {
                    it->first=i;
                    it->second =j;
                }
                i++;
                j--;
                c=1
            }
            i=x;
            j=y;
            while(i<=n && j<=n && i>=1 && j>=1)
            {
                for(it=mp.begin();it!=mp.end();it++)
                if(it->first==i && it->second ==j)
                    {
                        c=0;
                        break;
                    }
                if(c==1)
                    cnt++;
                else
                {
                    it->first=i;
                    it->second =j;
                }
                i--;
                j++;
                c=1
            }
            i=x;
            j=y;
            while(i<=n && j<=n && i>=1 && j>=1)
            {
                for(it=mp.begin();it!=mp.end();it++)
                if(it->first==i && it->second ==j)
                    {
                        c=0;
                        break;
                    }
                if(c==1)
                    cnt++;
                else
                {
                    it->first=i;
                    it->second =j;
                }
                i++;
                j++;
                c=1
            }
            }
            cout<<cnt<<endl;
        //}
    }
    return 0;
}
