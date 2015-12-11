#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[100001];
        cin>>a;
        int m,sum=0,n,i,b[26]={0},c=0,ar[26]={0},j,k,temp,f=1;
        n=strlen(a);
        for(i=0;i<n;i++)
        b[a[i]-97]++;
        m=b[0];
        for(i=0;i<26;i++)
        {
            if(b[i]>m)
                m=b[i];
            if(b[i]!=0)
            {
                ar[i]=i+1;
                k=i;
                c++;
            }
            if(b[i]>(n+1)/2)
                f=0;
            sum+=b[i];
        }
        for(i=0;i<26;i++)
        {
            for(j=i;j<26;j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        sum-=m;
        sum+=c;
        if(f==0)
            cout<<-1<<endl;
        /*else if((c==1 && ar[k]==1))
        cout<<a<<endl;*/
        else
        {
            k=0;
            for(j=0;j<m;j++)
            {
                for(i=25;i>=0;i--)
                {
                    if(b[i]!=0 && b[i]!=0)
                    {
                        a[k]=(char)(ar[i]+96);
                        k++;
                        b[i]--;
                    }
                }
            }
            a[k]='\0';
            cout<<a<<endl;
        }
    }
    return 0;
}
