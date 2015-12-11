#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n;
    n=a.length();
    if(a[n-1]&1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return 0;
}
