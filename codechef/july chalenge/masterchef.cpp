/*
    RAVI KUMAR
    ISM DHANBAD
    */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mat[100001][501],rating[100000],rat[100000],cst[100000];
ll l_search(ll l,ll r,ll low,ll high,ll ind[])
{
    //while(l<index[])

    if (high >= low)
   {
        ll mid =low+(high-low)/2;
        if(low==high )
        {
            if(ind[high]>r || l>ind[high])
                return -1;
            else
               return low;
        }
        /*if(ind[mid]<l && ind[mid+1]>=l)
            {
                if(ind[mid+1]<=r)
                    return mid+1;
                else
                    return -1;
            }*/
        if(ind[low]>r || l>ind[high])
        return -1;
        if(ind[mid]<=r && ind[mid]>=l)
            return mid;
        if(l>ind[mid] )
           return l_search(l,r,mid+1,high,ind);
        if(r<ind[mid] )
        return l_search(l,r,low,mid,ind);

        /*if (ind[mid] == l)
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

        */
   }
   return -1;
}
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
    cin>>t;
    while(t--)
    {
        ll n,k,m,i,sum=0,j,index[100000];
        cin>>n>>k>>m;
        ll l,r,c,x=0,l1,r1;
        memset(rat,0,n);
        memset(cst,0,n);
        //memset(index,-1,100000);
        for(i=0;i<n;i++)
        {
            cin>>rating[i];
            if(rating[i]<0)
            {
                index[x]=i+1;
                rat[x]=-rating[i];
                x++;
            }
            sum+=rating[i];
        }
        for(i=0;i<m;i++)
            {
                cin>>l>>r>>c;
                l1=l_search(l,r,0,x-1,index);
                cout<<l1<<" ";
                if(l1!=-1)
                {
                    while(r>=index[l1])
                    {
                        if(cst[l1]==0 || cst[l1]>c)
                        cst[l1]=c;
                        l1++;
                    }
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
        cout<<sum+mat[x][k]<<endl;
    }
    return 0;
}
