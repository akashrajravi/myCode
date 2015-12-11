#include<bits/stdc++.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,cnt=0;;
        scanf("%d%d",&n,&m);
        map<int,int>mp;
        if(n&1 || m==1)
        printf("Yes\n");
        else
        {
            i=m+1;
            while(1)
            {
                if(mp.find(i)!=mp.end())
                {
                    mp[i]=1;
                    i=(2*m+1)%n;
                    cnt++;
                }
                else
                {
                    if(cnt!=n)
                    printf("No %d\n",cnt);
                    else
                    printf("Yes\n");
                    break;
                }
            }
        }
    }
    return 0;
}
