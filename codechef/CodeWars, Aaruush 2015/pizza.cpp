# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,i,j,n,k,ti,q,p,x;
        cin>>num;
        int speed[num],dist[num],ans[num],pos[num],temp;
        for (i = 0; i < num; i++)
        {
            cin>>speed[i]>>dist[i];
            ans[i]=dist[i];
            pos[i]=i+1;
        }
        /*for(i=0;i<num;i++)
        {
            for (j=i+1;j<num;j++)
            {
                if (ans[i]>ans[j])
                {
                    temp=ans[j];
                    ans[j]=ans[i];
                    ans[i]=temp;

                    temp=pos[j];
                    pos[j]=pos[i];
                    pos[i]=temp;
                }
            }
        }*/
        cin>>q;
        while(q--)
        {
            cin>>ti>>p;
            for(i=0;i<num;i++)
            {
                /*if((dist[i]-speed[i]*ti)<=0)
                {
                    ans[i]=0;
                    pos[i]=i+1;
                }
                else
                {*/
                    ans[i]=(dist[i]-speed[i]*ti);
                    pos[i]=i+1;
               // }
            }
            sort(ans,ans+num);
            x=ans[p-1];
            for(i=0;i<n;i++)
            {
                if((dist[i]-speed[i]*ti)==x)
                    break;
            }
            /*for(i=0;i<num;i++)
            {
                 for (j=i+1;j<num;j++)
                {
                    if (ans[i]>ans[j])
                    {
                        temp=ans[j];
                        ans[j]=ans[i];
                        ans[i]=temp;

                        temp=pos[j];
                        pos[j]=pos[i];
                        pos[i]=temp;
                    }
                }
            }*/
            cout<<i+1<<endl;
        }
    }
   return(0);
}
