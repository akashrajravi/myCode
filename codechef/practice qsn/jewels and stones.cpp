#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int>mp,mp1;
        map<char,int>::iterator it,it1;
        string a,b;
        cin>>a>>b;
        int i,n,cnt=0;
        n=a.length();
        for(i=0;i<n;i++)
        mp[a[i]]++;
        n=b.length();
        for(i=0;i<n;i++)
        mp1[b[i]]++;
        for(it=mp.begin();it!=mp.end();it++)
        {
            for(it1=mp1.begin();it1!=mp1.end();it1++)
            {
                if(it->first==it1->first)
                {
                    cnt+=it1->second;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
