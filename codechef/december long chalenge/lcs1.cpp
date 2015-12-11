#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,cnt,m,k,l,f,n1,n2,o,p;
        cin>>n;
        string str[n],ans="",temp;
        char ch;
        for(i=0;i<n;i++){
        cin>>temp;
        str[i]=temp;
        }
        m=temp.length();
        int flg[n][m];
        for(i=0;i<n;i++){
           for(j=0;j<m;j++){
            if(j==0)
            flg[i][j]=1;
            else
            flg[i][j]=0;
           }
        }
        /*for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<flg[i][j]<<" ";
                cout<<str[i][j]<<" ";
            }
            cout<<endl;
        }*/
        temp="";
        for(j=0;j<m;j++){
            ch=str[0][j];
            cnt=0;
            for(o=1;o<n;o++){
                    for(p=0;p<m;p++){
                        if(p==0)
                        flg[o][p]=1;
                        else
                        flg[o][p]=0;
                        }
                    }
            f=0;
            for(i=1;i<n;i++){
                    l=0;
                while(!flg[i][l])
                    l++;
                cout<<l<<endl;
                flg[i][l]=0;
                while(l<m && str[i][l]!=ch)
                l++;
                if(l<m && str[i][l]==ch)
                {
                    cnt++;
                    flg[i][l+1]=1;
                }
                else
                {
                    f=1;
                    break;
                }
                if(cnt==n-1)
                temp=temp+ch;
                if(l>=m-1)
                    f=1;
                //cout<<temp<<"   ";
            }

            if(!f){
            n1=temp.length();
            n2=ans.length();
            if(n1>n2)
            ans=temp;
            }
            else
                temp="";
            cout<<ans<<" "<<temp<<endl;
        }
        j=0,k=0;
        n2=ans.length();
        for(i=0;i<n2;i++){
            if(ans[i]=='a')
                j++;
            else
                k++;
        }
        cout<<max(j,k)<<endl;
    }
    return 0;
}
