#include<bits/stdc++.h>
using namespace std;
int a[1000001],b[1000001],c[100001],d[1000001],e[100000];
/*#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}*/
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
int b_search(int l,int r,int x)
{
   if (r>=l)
   {
        int m= l+(r - l)/2;
        if (c[m]==x)
            return m;
        if (c[m]>x)
        return b_search(l,m-1,x);
        return b_search(m+1,r,x);
   }
}
int main()
{
    int n,m,i,j,l,sum,k,x,p,cnt=0;
    string str,name,ans;
    cin>>n>>m;
    //scanint(n);
    //scanint(m);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        e[i]=a[i];
        //scanint(a[i]);
    }
    sort(e,e+n);
    p=2;
    c[0]=e[0];
    b[1]=1;
    for(i=0;i<n-1;i++)
    {
        if(e[i]==e[i+1])
            b[p-1]++;
        else
        {
            c[p-1]=e[i+1];
            b[p]++;
            p++;
        }
    }
    p--;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            a[j]=max(a[j],a[j+1]);
            x=b_search(0,p-1,a[j]);
            //cout<<x<<" ";
            b[x+1]++;
            //mp[a[j]]++;
        }
    }
    for(i=1;i<=p;i++)
        d[i]=b[i];
    for(i=1;i<=p;i++)
        b[i]=b[i]+b[i-1];
    for(k=0;k<m;k++)
        {
            cin>>str>>l>>name;
            if(str[0]=='>')
            {
                j=fmax(l,0,p-1);
                //cout<<j<<" ";
                if((b[p]-b[j])%2==1)
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
                j=fmin(l,0,p-1);
                //cout<<j<<" ";
                if(b[j]%2==1)
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
                for(x=1;x<=p;x++)
                {
                    if(c[x-1]==l)
                    {
                        sum=d[x];
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
