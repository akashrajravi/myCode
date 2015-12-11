#include<bits/stdc++.h>
using namespace std;
/*struct pair1
{
    int arr;
    int dept;
};
int cmpr(struct pair1 a,struct pair1 b)
{
    return a.dept<b.dept?1:0;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],d[n],cnt=0,ans=0,i,j;
        //struct pair1 p[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            //p[i].arr=a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>d[i];
            //p[i].dept=d[i];
        }
        //sort(p,p+n,cmpr);
        for(i=0;i<n;i++)
        {
            cnt=0;
            for(j=0;j<n;j++)
            {
                if((a[i]<a[j] && a[j]<=d[i]) || (a[i]<=a[j] && a[j]<d[i]) || (d[i]>a[j] && d[i]<=d[j]) || (d[i]>=a[j] && d[i]<d[j]) || (a[i]>=a[j] && d[i]<d[j]) || (a[i]>a[j] && d[i]<=d[j]))
                cnt++;
            }
            if(cnt>ans)
                ans=cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}
