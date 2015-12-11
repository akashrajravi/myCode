/*
    RAVI KUMAR
    ISM DHANBAD
    */
#include<stdio.h>
#define ll long long int
ll mat[100001][501];
int max(ll a,ll b)
{
    if(a>b)
        return a;
    else
        return b;
}
/*ll l_search(ll l,ll r,ll low,ll high,ll ind[])
{
    //while(l<index[])
    if (high >= low)
   {
        ll mid =low+(high-low)/2;
        if (ind[mid] == l)
            return mid;
        else if(ind[low]==l)
            return low;
        else if(ind[high]==l)
            return high;
        else if(low==high)
        {
            if(ind[low]>l && ind[low]<=r)
                return low;
            else
                return -1;
        }
        else if(ind[mid]<l && ind[mid+1]>l && ind[mid+1]<=r)
            return mid+1;
        else if(ind[mid]>l && ind[mid-1]<l)
            return mid;
        else if(l>ind[mid])
           return l_search(l,r,mid+1,high,ind);
        else
        return l_search(l,r,low,mid,ind);
   }
   return -1;
}*/
/*int r_search(ll index[],ll r,ll low,ll high)
{
    if (high >= low)
   {
        ll mid =low+(high-low)/2;
        if (index[mid] == r)
            return mid;
        else if(index[low]==r)
            return low;
        else if(index[high]==r)
            return high;
        else if(low+1==high)
        {
            if(index[high]>r)
                return low;
            else
                return high;
        }
        //else if (mid==low)
            //return max(index[mid],l);
        else if(index[mid]<=r && index[mid+1]>=r)
            return mid;
        else if(r>index[mid-1] && r>index[mid+1])
           // return index[mid+1];
           return r_search(index,r,mid+1,high);
        return r_search(index,r,low,mid);
   }
}*/
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,m,i,j,l,r,c,x=0,cst[100000];
        ll rating[100000],rat[100000];
        ll sum=0;
        scanf("%d%d%d",&n,&k,&m);
        //cin>>n>>k>>m;
        for(i=0;i<n;i++)
            {
                rat[i]=0;
                cst[i]=0;
            }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&rating[i]);
            sum+=rating[i];
        }
        for(i=0;i<m;i++)
            {
                //cin>>l>>r>>c;
                scanf("%d%d%d",&l,&r,&c);
                for(j=l-1;j<r;j++)
                {
                    if(rating[j]<=rat[j] && (cst[j]==0 || cst[j]>c))
                    {
                        rat[j]=rating[j];
                        cst[j]=c;
                    }
                }
            }
        for(i=0;i<n;i++)
        {
            if(rat[i]<0)
            {
                rat[x]=-rat[i];
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
                    mat[i][j]=max(rat[i-1]+mat[i-1][j-cst[i-1]],mat[i-1][j]);
                else
                    mat[i][j]=mat[i-1][j];
            }
        }
        printf("%lld\n",sum+mat[x][k]);
    }
    return 0;
}
