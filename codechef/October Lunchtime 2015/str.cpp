#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int a[26]={0},len,i;
        len=str.length();
        for(i=0;i<len;i++)
        a[str[i]-'A']++;
        if(len>9 && a[4]>1 && a['L'-'A']>1 && a['T'-'A']>1 && a['I'-'A']>1 && a['M'-'A']>1)
        cout<<"YES"<<endl;
        else if(len<=9 && a[4]>0 && a['L'-'A']>1 && a['T'-'A']>1 && a['I'-'A']>1 && a['M'-'A']>1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
