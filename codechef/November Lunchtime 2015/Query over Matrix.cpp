#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,q,x,y;
    long long sum=0,s;
    cin>>n;
    int row[n+1],col[n+2],mat[n+1][2];
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    for(i=1;i<=n;i++){
        cin>>x>>y;
        mat[i][0]=x;
        mat[i][1]=y;
        row[i]=y-x+1;
        sum+=row[i];
        col[x]+=1;
        col[y+1]-=1;
    }
    for(i=2;i<=n;i++)
    col[i]+=col[i-1];

    cin>>q;
    while(q--){
        cin>>x>>y;
        s=sum;
        s-=(row[x]+col[y]);
        if(mat[x][0]<=y && y<=mat[x][1])
            s++;
        if(s&1)
        cout<<"O"<<endl;
        else
        cout<<"E"<<endl;
    }
    return 0;
}
