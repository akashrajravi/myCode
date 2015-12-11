#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,i=0,flag=1;
        double p,y=1000000000.0,x,temp,x1;
        cin>>m>>p;
        if(p==1)
        {
            if(m&1)
            cout<<"1000000000.00"<<" "<<"0.00"<<endl;
            else
            cout<<"0.00"<<" "<<"1000000000.00"<<endl;
        }
        else if(p==0 || m==1)
        cout<<"1000000000.00"<<" "<<"0.00"<<endl;
        else
        {
            while(i<m)
            {
                x=y*pow(p,i);
                temp=x*p;

                if(x/2 >= temp)//&& temp >);
                {
                    printf("%.2lf %.2lf\n",x/2,x/2);
                    flag=0;
                    break;
                }
                i++;
            }
            if(flag)
            {
                if(m&1)
                    printf("%.2lf 0.00\n",x);
                else
                printf("0.00 %.2lf\n",x);
            }
        }
    }
    return 0;
}
