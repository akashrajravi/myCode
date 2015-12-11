#include<bits/stdc++.h>
using namespace std;
#define ll long long
int subset(int start, int index, int num_sub)
{
    int i, j;
    if (index - start + 1  ==  num_sub)
    {
        if (num_sub  ==  1)
        {
            for (i = 0;i < n;i++)
                printf("%c\n", string[i]);
        }
        else
        {
            for (j = index;j < n;j++)
            {
                for (i = start;i < index;i++)
                    printf("%c", string[i]);
                printf("%c\n", string[j]);
            }
            if (start != n - num_sub)
                subset(start + 1, start + 1, num_sub);
        }
    }
    else
    {
        subset(start, index + 1, num_sub);
    }
}
int solve(ll l,ll r, ll type)
{
    int n=r-l+1;
    if(type==0)
    return n;
    else if(type==1)
    return n*(n+1)/2;
    else
    return n*(n+1)*(2*n+1)/6;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll q,a=0,b=0,n;
        char p[100001];
        cin>>p>>q;
        n=strlen(p);
        while(q--)
        {
            ll x,y,type,ans,q,l,r;
            cin>>x>>y>>type;
            l=(x+a)%n+1;
            r=(y+b)%n+1;
            if(l>r)
            std::swap(x,y);
            ans=subset(l,r,type);
            a=b;
            b=ans;
            cout<<ans<<endl;
        }
    }
    return 0;
}
