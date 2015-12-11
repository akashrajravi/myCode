#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,len,i,cnt,j,k,flg;
        cin>>len;
        map<string,int>m;
        map<string,int>::iterator it;
        string x;
        for(cnt=1;cnt<=len;cnt++)
        {
            cin>>x;
            j=1;
            n=x.length();
            flg=1;
            while(j<=n)
            {
                k=0;
                i=j;
                while(k+i<=n)
                {
                    if(m.find(x.substr(k,i))==m.end())
                    {
                        m[x.substr(k,i)]++;

                    }
                    else
                    {
                        if(m[x.substr(k,i)]!=(cnt-1) && flg)
                            {
                                m[x.substr(k,i)]++;
                                flg=0;
                                cout<<x.substr(k,i)<<" ";
                            }
                    }
                    k++;
                }
                j++;
            }
        }
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==n)
            {
                cout<<it->first<<endl;
                break;
            }
        }
    }
}
