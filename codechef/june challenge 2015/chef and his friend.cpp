#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,d,m=0,n=0,ans;
        cin>>a>>b>>c>>d;
            if (c<b)
                m=((b-c)*(b-c))/2;
            if ((c+a)<b)
                 m=a*(b-c)-((a*a)/2);
            if (d<a)
                n= ((a-d)*(a-d))/ 2;
            if ((d+b)<a)
                n=b*(a-d)-((b*b)/ 2);
            ans= 1-(m+n)/(a*b);
            printf ("%.6f\n",ans);
    }
    return 0;
}
