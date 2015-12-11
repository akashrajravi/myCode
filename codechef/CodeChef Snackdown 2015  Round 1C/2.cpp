#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,ans=0;
        cin>>n>>w;
        int a[n],i,j;
        for(i=0;i<n;i++)
        cin>>a[i];
        int count=0;
            for(i=0;i<n;i++)
            {
                int j=i+w-1;
                int max,min;
                max=a[i],min=a[i];
                for(int p=i+1;p<=j;p++)
                {
                    if(a[p]>max)
                        max=a[p];
                    if(a[p]<min)
                        min=a[p];
                }
                if((max-min)==j-i);
                {
                    count++;
                    ans=1;
                }
                w++;
                while(w<=n-i)
                {
                    j=i+w-1;
                    if(ans==1)
                    {
                        if(a[j]==max+1)
                        {
                            count++;
                            max=a[j];
                        }
                        else if(a[j]==min-1)
                        {
                            count++;
                            min=a[j];
                        }
                        else ans=0;
                    }
                    else
                    {
                        if(a[j]<min)
                            min=a[j];
                        else if(a[j]>max)
                            max=a[j];
                        if((max-min)==(j-i))
                        {
                            ans=1;
                            count++;
                        }
                        else ans=0;
                    }
                    w++;
                }
            }
        cout<<count<<endl;
    }
}
