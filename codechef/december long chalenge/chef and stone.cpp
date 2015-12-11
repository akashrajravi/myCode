#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
       ll n1,n2,m,sum;
       cin>>n1>>n2>>m;
       sum=m*(m+1)/2;
       if(sum>=min(n1,n2))
       cout<<abs(n1-n2)<<endl;
       else{
        cout<<n1+n2-2*sum<<endl;
       }
    }
    return 0;
}
