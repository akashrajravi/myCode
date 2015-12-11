#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isSubsetSum(int set[], int n, int sum)
{
    bool subset[sum+1][n+1];
    for (int i = 0; i <= n; i++)
      subset[0][i] = true;
    for (int i = 1; i <= sum; i++)
      subset[i][0] = false;
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] || subset[i - set[j-1]][j-1];
       }
     }

     return subset[sum][n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,sum=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum&1)
        cout<<"NO"<<endl;
        else

        {
            if(isSubsetSum(a,n,sum)==true)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }
    }
    return 0;
}
