#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,id,j,cnt=0,t,l;
    float ans;
    cin>>n>>k;
    map<int,int> mp;
    int a[k];
    /*for(i=0;i<n;i++)
        a.push_back(0);*/
    for(i=0;i<k;i++)
        cin>>a[i];
    sort(a,a+k);
    if(a[0]==1)
        printf("0.00\n");
    else
    {
        for(i=0;i<k;i++)
        {
            j=a[i];
            t=1;
            for(l=0;l<i;l++)
            {
                if(j%a[l]==0)
                {
                    t=0;
                    break;
                }
            }
            if(t)
            {
                while(j<=n)
                {
                    mp[j]++;
                    j+=a[i];
                }
            }
        }
        cnt=n-mp.size();
        ans=(float(cnt)/(float(n))*100);
        printf("%.2f\n",ans);
    }
    return 0;
}
