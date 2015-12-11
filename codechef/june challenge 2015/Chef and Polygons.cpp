#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
        return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  n,j,m,i,xmax,ans,x,y;
        cin>>n;
        int x1max[100000],ar[100000];
        for(i=0;i<n;i++)
        {
            cin>>m;
            xmax=-1000000000;
            for(j=0;j<m;j++)
            {
                cin>>x>>y;
            if(xmax<x)
               {
                 xmax=x;
                x1max[i]=xmax;
               }
            }
        }
        for(i=0;i<n;i++)
            ar[i]=x1max[i];
        sort(ar,ar+n);
        for(i=0;i<n;i++)
            cout<<binarySearch(ar,0,n-1,x1max[i])<<" ";
        cout<<endl;
    }
    return 0;
}
