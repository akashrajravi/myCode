/* RAVI KUMAR
    masterchef
    */
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
ll mat[100001][501];
struct masterchef
{
    ll left;
    ll right;
    ll cost;
};
ll cmpr(struct masterchef a,struct masterchef b)
{
    return a.cost<b.cost?1:0;
}
void scanint(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
    ll t;
    //cin>>t;
    scanint(t);
    while(t--)
    {
        ll n,k,m,i,j,sum=0;
        //cin>>n>>k>>m;
        scanint(n);
        scanint(k);
        scanint(m);
        ll rat[n],rating[n],cst[n],rt[n],l,r,c,x=0,y,temp;
        memset(rat,0,sizeof(rat));
        memset(cst,0,sizeof(cst));
        for(i=0;i<n;i++)
        {
            //cin>>rating[i];
            scanint(rating[i]);
            sum+=rating[i];
        }
        struct masterchef data[m];
        for(i=0;i<m;i++)
        {
            //cin>>l>>r>>c;
            scanint(l);
            scanint(r);
            scanint(c);
            data[i].left=l;
            data[i].right=r;
            data[i].cost=c;
        }
        sort(data,data+m,cmpr);
        for(i=0;i<m;i++)
        //cout<<data[i].left<<" "<<data[i].right<<" "<<data[i].cost<<endl;
        for(j=0;j<m;j++)
        {
            if(data[j].cost>k)
                break;
            x=data[j].left-1;
            y=data[j].right;
            for(i=x;i<y;i++)
            {
                if(rat[i]==0)
                {
                    rat[i]=rating[i];
                    cst[i]=data[j].cost;
                }
            }
        }
        x=0;
        for(i=0;i<n;i++)
        {
            if(rat[i]<0)
            {
                rt[x]=-rat[i];
                cst[x]=cst[i];
                x++;
            }
        }

        for(i=0;i<=x;i++)
        {
            for(j=0;j<=k;j++)
            {
                if(i==0||j==0)
                    mat[i][j]=0;
                else if(cst[i-1]<=j)
                    mat[i][j]=max(rt[i-1]+mat[i-1][j-cst[i-1]],mat[i-1][j]);
                else
                    mat[i][j]=mat[i-1][j];
            }
        }
        //printf("%lld\n",sum+mat[x][k]);
        cout<<sum+mat[x][k]<<endl;
    }
    return 0;
}
