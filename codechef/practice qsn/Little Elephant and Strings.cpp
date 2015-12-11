#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,i,len,flag,j;
    char str[51][51],a[51][51];
    cin>>k>>n;
    for(i=0;i<k;i++)
    cin>>str[i];
    for(i=0;i<n;i++)
    {
        flag=0;
        cin>>a[i];
        len=strlen(a[i]);
        if(len>=47)
        cout<<"Good"<<endl;
        else
        {
            for(j=0;j<k;j++)
            {
                if(strstr(a[i],str[j]))
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            cout<<"Good"<<endl;
            else
            cout<<"Bad"<<endl;
        }
    }
    return 0;
}
