#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        while(g--)
        {
            int l,i,n,q;
            cin>>l>>n>>q;
            if(n&1 && l!=q)
                cout<<n/2+1<<endl;
            else
                cout<<n/2<<endl;
        }
    }
    return 0;
}
