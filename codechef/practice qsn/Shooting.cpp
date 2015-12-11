#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,cnt=0,x=0,k;
        cin>>n>>m;
        //int row[n],col[m],x=0,y=0,temp[m],temp2[n];
        /*memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(temp,0,sizeof(temp));
        memset(temp2,0,sizeof(temp2));*/
        char a[n+1][m+1],b[n+1][m+1];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    cin>>a[i][j];
                    b[i][j]=a[i][j];
                }

        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]=='L')
                {
                    for(k=0;k<m;k++)
                        b[i][k]='.';
                    for(k=0;k<n;k++)
                        b[k][j]='.';
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(b[i][j]=='E')
                {
                    x=1;
                    break;
                }
            }
            if(x)
                break;
        }
        if(x)
        cout<<"Impossible"<<endl;
        else
        cout<<"Possible"<<endl;
    }
    return 0;
}
