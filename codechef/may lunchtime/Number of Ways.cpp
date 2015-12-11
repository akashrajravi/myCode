#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int num(int m, int n,int l)
{
    int count[m][n];
    for (int i = 0; i < m; i++)
        count[i][0] = 1;
    for (int j = l; j < n; j++)
        count[0][j] = 1;
    for (int i = 1; i < m; i++)
    {
        for (int j = l+1; j < n; j++)
            count[i][j] = count[i-1][j] + count[i][j-1]; //+ count[i-1][j-1];

    }
    return count[m-1][n-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,k,sum=0;
        cin>>n>>k;
        for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
        sum+=num(k,j,i);
        cout<<sum<<endl;
    }
    return 0;
}
