#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        int n1,n,x=0,y=0,x1,y1,i,j;
        cin>>n;
        cin>>a;
        n1=a.length();
        for(i=0;i<n1;i++){
            if(a[i]=='a')
                x++;
            else
                y++;
        }
        for(j=1;j<n;j++){
                cin>>a;
                x1=0;
                y1=0;
            for(i=0;i<n1;i++){
                if(a[i]=='a')
                    x1++;
                else
                    y1++;
            }
            x=min(x,x1);
            y=min(y,y1);
        }
        cout<<min(x,y)<<endl;
    }
    return 0;
}
