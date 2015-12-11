#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(string x,ll l,ll n)
{
    ll i;
    stack<char>stck;
    for(i=0;i<n;i++)
    {
        if(x[i+l]=='(')
        {
            stck.push(x[i+l]);
        }
        else
        {
            if(stck.top()=='(')
                stck.pop();
            else
            return 1;
        }
    }
    return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string a,x;
        ll k,j=1,n,i,l;
        map<string,ll>m;
        map<string,ll>::iterator it;
        cin>>a>>k;
        n=a.length();
        while(j<=n)
        {
            l=0;
            i=j;
            while(l+i<=n)
            {
                cout<<n;
                if(check(a.substr(l,i),l,l+i))
                    {
                        m[a.substr(l,i)]++;
                        cout<<a.substr(l,i)<<endl;
                    }
                l++;
            }
            j++;
        }
        for(it=m.begin();it!=m.end();it++)
            cout<<it->first<<endl;
        /*if(k==1)
        {
            it=m.begin();
            cout<<it->first<<endl;
        }
        else
        {
            i=1;
            for(it=m.begin();it!=m.end();it++)
            {
                i++;
                if(i==k)
                break;
            }
            cout<<it->first<<endl;
        }*/
        i=0;
        for(it=m.begin();it!=m.end();it++)
            {
                i++;
            }
        if(i<k)
            cout<<-1<<endl;
        else
        {
            it=m.end();
            cout<<it->first<<endl;
        }
    }
    return 0;
}
