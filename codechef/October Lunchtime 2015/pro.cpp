#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100001],b[100001],c[100001];


void sort(ll arr[],ll min,ll mid,ll max);
void mergesort(ll arr[],ll min,ll max)
{
    ll mid;
    if(min<max)
    {
        mid=(min+max)/2;
        mergesort(arr,min,mid);
        mergesort(arr,mid+1,max);
        sort(arr,min,mid,max);
    }
}
void sort(ll arr[],ll min,ll mid,ll max)
{
    ll i=min,j=mid+1,k,temp[max],index=min;
    while(i<=mid && j<=max)
    {
        if(arr[i]<arr[j])
        {
            temp[index]=arr[i];
            index++;
            i++;
        }
        else
        {
            temp[index]=arr[j];
            index++;
            j++;
        }
    }
    if(i<mid+1)
    {
        while(i<=mid)
        {
            temp[index]=arr[i];
            index++;
            i++;
        }
    }
    else
    {
        while(j<=max)
        {
            temp[index]=arr[j];
            index++;
            j++;
        }
    }
    for(k=min;k<index;k++)
    arr[k]=temp[k];
}

int main()
{
    ll n,m,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    while(m--)
    {
        ll l,r,s,x;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            c[i-1]=a[i-1];
            b[i]=0;
        }
        mergesort(c,l-1,r-1);
        for(i=l+1;i<=r;i++)
            b[i]=(b[i-1]+pow((c[i-1]-c[i-2]),2));
        cout<<b[r]<<endl;
    }
    return 0;
}
