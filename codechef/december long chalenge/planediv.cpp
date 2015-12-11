#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return (b==0?a:gcd(b,a%b));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,i,n,d,cnt=0;
        cin>>n;
        map<pair<pair<int,int>,int>,int >mp;
        map<pair<pair<int,int>,int>,int >::iterator it;
        map<double,int>mm;
        map<double,int>::iterator itt;
        pair<pair<int,int>,int> pr;
        pair<int,int>p;
        for(i=0;i<n;i++){
            cin>>a>>b>>c;
            d=gcd(a,gcd(b,c));
            if(d!=0){
                a/=d;
                b/=d;
                c/=d;
            }
            mp[make_pair(make_pair(a,b),c)]++;
        }
        for(it=mp.begin();it!=mp.end();it++){
            pr=it->first;
            p=pr.first;
            if(p.second==0)
              mm[INT_MAX]++;
            else
            mm[(double)p.first/(double)p.second]++;
        }
        for(itt=mm.begin();itt!=mm.end();itt++){
            cnt=max(cnt,itt->second);
            //cout<<itt->first<<" "<<itt->second<<" ";
        }
        cout<<cnt<<endl;
    }
    return 0;
}
