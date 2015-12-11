#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ex,ey,sx,sy,bx,by;
        cin>>n>>sx>>sy>>ex>>ey>>bx>>by;
        if((sx==bx && bx==ex))
        {
            if(abs(ey-sy)>abs(ey-by))
                cout<<(abs(sx-ex)+abs(sy-ey)+2)<<endl;
            else
                    cout<<(abs(sx-ex)+abs(sy-ey))<<endl;
        }
        else if (sy==by && by==ey)
        {
            if(abs(ex-sx)>abs(ex-bx))
                cout<<(abs(sx-ex)+abs(sy-ey)+2)<<endl;
            else cout<<(abs(sx-ex)+abs(sy-ey))<<endl;
        }
        else
        cout<<(abs(sx-ex)+abs(sy-ey))<<endl;
    }
    return 0;
}
