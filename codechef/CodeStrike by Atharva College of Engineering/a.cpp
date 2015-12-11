#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        char c;
        int n1,n2,i,mx=0;
        cin>>s1>>s2;
        n1=s1.length();
        n2=s2.length();
        int s[26],l[26];
        memset(s,0,sizeof(s));
        memset(l,0,sizeof(l));
        for(i=0;i<n1;i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
            s[s1[i]-'a']++;
            else if(s1[i]>='A' && s1[i]<='Z')
            l[s1[i]-'A']++;
        }
        for(i=0;i<n2;i++)
        {
            if(s2[i]>='a' && s2[i]<='z')
            s[s2[i]-'a']++;
            else if(s2[i]>='A' && s2[i]<='Z')
            l[s2[i]-'A']++;
        }
        for(i=0;i<26;i++)
        {
            if(mx<l[i])
            {
                mx=l[i];
                c=i+65;
            }
        }
        for(i=0;i<26;i++)
        {
            if(mx<s[i])
            {
                mx=s[i];
                c=i+97;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
