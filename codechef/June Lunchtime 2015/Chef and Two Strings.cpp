#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        int i,min=0,max=0,n;
        cin>>a>>b;
        n=a.length();
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                if(a[i]=='?')
                max++;
            }
            else
            {
                if(a[i]=='?' || b[i]=='?')
                    max++;
                else
                {
                    min++;
                    max++;
                }
            }

        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
