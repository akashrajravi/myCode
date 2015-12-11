//bit_hack
//4-9-2015
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,cnt=0,num,s;
        cin>>n;
        s=n*n;
        int x[s],y[s];
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cin>>num;
            x[num-1]=i;
            y[num-1]=j;
        }
        for(i=0;i<s-1;i++)
        cnt+=(abs(x[i+1]-x[i])+abs(y[i+1]-y[i]));
        cout<<cnt<<endl;
    }
    return 0;
}
