#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sort1(ll arr[],ll min1,ll mid,ll max1);
void mergesort(ll arr[],ll min1,ll max1)
{
    ll mid;
    if(min1<max1)
    {
        mid=(min1+max1)/2;
        mergesort(arr,min1,mid);
        mergesort(arr,mid+1,max1);
        sort1(arr,min1,mid,max1);
    }
}
void sort1(ll arr[],ll min1,ll mid,ll max1)
{
    ll i=min1,j=mid+1,k,temp[max1],index=min1;
    while(i<=mid && j<=max1)
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
        while(j<=max1)
        {
            temp[index]=arr[j];
            index++;
            j++;
        }
    }
    for(k=min1;k<index;k++)
    arr[k]=temp[k];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,m=1000000000;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        mergesort(a,0,n-1);
        for(i=0;i<n-1;i++)
        if(m>(a[i+1]-a[i]))
        m=(a[i+1]-a[i]);
        cout<<m<<endl;
    }
    return 0;
}
