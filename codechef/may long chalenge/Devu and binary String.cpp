#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,l=0,c=0,c1=0,c2=0,c3=0,x;
        cin>>n>>k;
        char a[100001],b[100001],d[100001],e[100001],f[100001];
        cin>>a;
        if(n==1 || n<=k)
           cout<<"0"<<endl<<a<<endl;
        else if(k==1)
        {
            for(i=0;i<n;i++)
            {
                if(l==0)
                   {
                        b[i]='1';
                        l=1;
                   }
                else
                    {
                        b[i]='0';
                        l=0;
                    }
            }
            for(i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                    c++;
            }
            b[n]='\0';
            l=0;
            for(i=n-1;i>=0;i--)
            {
                if(l==0)
                   {
                        d[i]='1';
                        l=1;
                   }
                else
                    {
                        d[i]='0';
                        l=0;
                    }
            }
            d[n]='\0';
            for(i=0;i<n;i++)
            {
                if(a[i]!=d[i])
                    c1++;
            }
            for(i=0;i<n;i++)
            {
                if(l==0)
                   {
                        e[i]='0';
                        l=1;
                   }
                else
                    {
                        e[i]='1';
                        l=0;
                    }
            }
            for(i=0;i<n;i++)
            {
                if(a[i]!=e[i])
                    c2++;
            }
            e[n]='\0';
            l=0;
            for(i=n-1;i>=0;i--)
            {
                if(l==0)
                   {
                        f[i]='0';
                        l=1;
                   }
                else
                    {
                        f[i]='1';
                        l=0;
                    }
            }
            f[n]='\0';
            for(i=0;i<n;i++)
            {
                if(a[i]!=f[i])
                    c3++;
            }
            x=min(c,min(c1,min(c2,c3)));
            if(x==c)
            cout<<c<<endl<<b<<endl;
            else if(x==c1)
            cout<<c1<<endl<<d<<endl;
            else if(x==c2)
            cout<<c2<<endl<<e<<endl;
            else
            cout<<c3<<endl<<f<<endl;
        }
        else
        {
            l=1;
            for(i=0;i<n-1;i++)
            {
                if(a[i]==a[i+1])
                {
                    l++;
                    if(l-k==1)
                    {
                        if (a[i+1]==a[i+2])
                        {
                            a[i+1]=(!((int)a[i+1]-48)+48);
                            c++;
                            i++;
                        }
                        else if(a[i+1]!=a[i+2])
                        {
                            a[i]=(!((int)a[i]-48)+48);
                            c++;
                        }
                        l=1;
                    }
                }
                else
                    l=1;
            }
            cout<<c<<endl<<a<<endl;
        }
    }
    return 0;
}