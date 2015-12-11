#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll con;
ll gcd(ll a,ll b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}

void combinationUtil(ll arr[],ll data[],ll start,ll end,ll index,ll r)
{
    ll res=1,j,i;
    if (index == r)
    {
        for (j=0; j<r; j++)
             res = res*arr[j]/gcd(res, arr[j]);
        con+=(end+1)/res;
        return;
    }
    for (i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}
void printCombination(ll arr[],ll n,ll r)
{
    ll data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}
int main()
{
    ll n,i,k,id,j=2,cnt=0;
    float ans;
    cin>>n>>k;
    ll a[k];
    for(i=0;i<k;i++)
    {
        cin>>a[i];
        cnt+=n/a[i];
    }
    for(i=2;i<=k;i++)
    printCombination(a, n, i);
    ans=(n-(cnt-con))*100;
    ans=ans/n;
    printf("%.2f\n",ans);
    cout<<con;
    return 0;
}


