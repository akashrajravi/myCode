#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n,i,b=0,w=0,cnt=0;
        n=str.length();
        for(i=0;i<n;i++){
            if(str[i]=='W')
            w++;
            else
            b++;
        }
        for(i=0;i<n-1;i++){
            if(str[i]!=str[i+1])
            cnt++;
        }
        if(b!=0 || b&1 || w!=0 )
        cout<<"Aleksa"<<endl;
        else
        cout<<"Chef"<<endl;
    }
    return 0;
}
