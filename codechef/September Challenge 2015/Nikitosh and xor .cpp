#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],ans[n],mx=0,len=n-1,j,k,l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    mx*=2;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            a[j]=a[j+1]^a[j];
        }
        for(k=0;k<len-1;k++)
        {
            for(l=k+1;l<len;l++)
            {
                mx=max(mx,a[k]+a[l]);
            }
        }
        len--;
    }
    cout<<mx<<endl;
    return 0;
}
