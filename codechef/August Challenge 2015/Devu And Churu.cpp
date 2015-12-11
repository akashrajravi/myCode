//bit_hack
#include<bits/stdc++.h>
using namespace std;
int a[1000001],b[1000001],c[1000001],d[1000001];
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}
int fmax(int l,int low,int high)
{
    int mid;
    if(low<=high)
    {
        mid=low+(high-low)/2;
        if(c[mid]>l && c[mid-1]<=l)
            return mid;
        if(c[mid]<=l)
            return fmax(l,mid+1,high);
        else
            return fmax(l,low,mid-1);
    }
    return high+1;
}
int fmin(int l,int low,int high)
{
  int mid;
    if(low<=high)
    {
        mid=low+(high-low)/2;
        if(c[mid]>=l && c[mid-1]<l)
            return mid;
        if(c[mid]<l)
            return fmin(l,mid+1,high);
        else
            return fmin(l,low,mid-1);
    }
    return low;
}
int main()
{
    int n,m,i,j,l,sum,k;
    string str,name,ans;
    //cin>>n>>m;
    scanint(n);
    scanint(m);
    map<int,int> mp;
    map<int,int>::iterator it;
    for(i=0;i<n;i++)
    {
        //cin>>a[i];
        scanint(a[i]);
        mp[a[i]]++;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            a[j]=max(a[j],a[j+1]);
            mp[a[j]]++;
        }
    }
    b[0]=0;
    i=1;
    for(it=mp.begin();it!=mp.end();it++)
    {
        b[i]=b[i-1]+it->second;
        c[i]=it->first;
        i++;
    }
    for(k=0;k<m;k++)
        {
            //cin>>str>>l>>name;
            cin>>str;
            scanint(l);
            cin>>name;
            if(str[0]=='>')
            {
                j=fmax(l,1,i-1);
                if((b[i-1]-b[j-1])%2==1)
                        cout<<name[0];
                     else
                        {
                            if(name[0]=='D')
                            cout<<"C";
                            else
                            cout<<"D";
                        }
                 }
            else if(str[0]=='<')
            {
                j=fmin(l,1,i-1);
                if(b[j-1]%2==1)
                    cout<<name[0];
                else
                {
                    if(name[0]=='D')
                        cout<<"C";
                    else
                        cout<<"D";
                }
            }
            else
            {
                sum=0;
                for(it=mp.begin();it!=mp.end();it++)
                {
                    if(it->first==l)
                    {
                        sum=it->second;
                        break;
                    }
                }
                if(sum%2==1)
                    cout<<name[0];
                else
                {
                    if(name[0]=='D')
                        cout<<"C";
                    else
                        cout<<"D";
                }
            }
        }
    return 0;
}
