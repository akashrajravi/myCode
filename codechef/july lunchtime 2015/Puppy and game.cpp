#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a&1 && b&1)
        cout<<"Vanka"<<endl;
        else
        cout<<"Tuzik"<<endl;
    }
    return 0;
}
