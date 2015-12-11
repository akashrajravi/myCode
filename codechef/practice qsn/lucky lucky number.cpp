#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem,mul;
        cin>>n;
        rem=n%7;
        if(!rem)
            cout<<n<<endl;
        else if(rem==1)
        {
            if((n-8)<0)
                cout<<-1<<endl;
            else
            cout<<n-8<<endl;
        }
        else if(rem==2)
        {
            if((n-16)<0)
                cout<<-1<<endl;
            else
                cout<<n-16<<endl;
        }
        else if(rem==3)
        {
            if((n-24)<0)
                cout<<-1<<endl;
            else
                cout<<n-24<<endl;
        }
        else if(rem==4)
        {
            if((n-4)<0)
                cout<<-1<<endl;
            else
                cout<<n-4<<endl;
        }
        else if(rem==5)
        {
            if((n-12)<0)
                cout<<-1<<endl;
            else
                cout<<n-12<<endl;
        }
        else if(rem==6)
        {
            if((n-20)<0)
                cout<<-1<<endl;
            else
                cout<<n-20<<endl;
        }
    }
    return 0;
}
