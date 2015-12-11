#include<bits/stdc++.h>
using namespace std;
/*#define ll long long
struct pair1
{
    int num;
    int ind;
};
int cmpr(struct pair1 a,struct pair1 b)
{
    return a.num<b.num?1:0;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[10],ind,flag=1,j,m,i,cnt=0;
        //struct pair1 candle[10];
        cin>>a[0];
        m=a[0];
        ind=0;
        for(i=1;i<10;i++)
        {
            cin>>a[i];
            if(m>a[i])
            {
                m=a[i];
                ind=i;
            }
        }
        if(ind)
        {
            for(i=0;i<=m;i++)
                cout<<ind;
                cout<<endl;
        }
        else
        {
            for(i=1;i<10;i++)
            {
                if(a[i]==a[0])
                {
                    flag=0;
                    for(j=0;j<=a[i];j++)
                        cout<<i;
                    cout<<endl;
                    break;
                }
            }
            if(flag)
            {
                cout<<1;
            for(i=0;i<=m;i++)
                cout<<0;
                cout<<endl;
            }
        }
            //sort(candle,candle+10,cmpr);
            /*if(candle[0].ind==0)
            {
                if(candle[1].num==0)
                cout<<candle[1].ind<<endl;
                else if(candle[0].num <= candle[1].num)
                {
                    cout<<1;
                    for(i=0;i<=candle[0].num;i++)
                        cout<<0;
                    cout<<endl;
                }
            }
            else
            {
                for(i=0;i<=candle[0].num;i++)
                cout<<candle[0].ind;
                cout<<endl;
            }*/
    }
    return 0;
}
