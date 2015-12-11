#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    int n,q;
    cin>>n>>q;
    ll a[n],i,t,x,y,v,sum,add[n],mul[n],rep[n],que[q][4],l=0,temp,k,j;
    /*memset(add,0,sizeof(add));
    memset(mul,0,sizeof(mul));
    memset(rep,0,sizeof(rep));*/
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<q;i++)
    {
        sum=0;
        cin>>t;
        if(t!=1 || t==2)
        {
            que[i][0]=t;
            cin>>que[i][1]>>que[i][2]>>que[i][3];
        }
        else if(t==3)
        {
            cin>>x>>y>>v;
            for(i=x-1;i<y;i++)
                a[i]=v;
        }
        else
        {
            cin>>x>>y;
            for(j=l;j<=i;j++)
            {
                if(que[j][0]==1)
                    sum+=(min(que[j][2],y)-max(que[j][1],x)+1)*que[j][3];
                    //sum+=(max(que[j][1],x)-min(que[j][2],y))*que[j][3];
                    //cout<<sum<<"  ";}
                else if(que[j][0]==2)
                {
                    temp=0;
                    for(k=max(que[j][1],x)-1;k<min(que[j][2],y);k++)
                        temp+=a[k];
                        //cout<<temp<<" ";
                    for(k=x-1;k<que[j][1]-1;k++)
                        sum+=a[k];
                        //cout<<sum<<" ";
                    for(k=que[j][2];k<y;k++)
                        sum+=a[k];
                        //cout<<sum<<" ";
                        sum+=temp*que[j][3];
                        //cout<<sum<<" ";
                }

            }
            l=i+1;
            cout<<sum%mod<<endl;
        }
    }
    return 0;
}
