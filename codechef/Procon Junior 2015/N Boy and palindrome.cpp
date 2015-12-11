#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n,i,j,k=1,l=1,ar[26];
        n=a.length();
        memset(ar,0,sizeof(ar));
        for(i=0;i<n;i++)
        ar[a[i]-'a']++;
        for(i=0;i<26;i++)
        {
            if(!ar[i])
            {
                l=0;
                break;
            }
        }
        i=0;
        j=n-1;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                k=0;
                break;
            }
            i++;
            j--;
        }
        if(!l && !k)
        cout<<"none"<<endl;
        else if(l && k)
        cout<<"palingram"<<endl;
        else if(l && !k)
        cout<<"pangram"<<endl;
        else
        cout<<"palindrome"<<endl;
    }
    return 0;
}
