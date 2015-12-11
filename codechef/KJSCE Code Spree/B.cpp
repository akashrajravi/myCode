#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j;
    string s;
    scanf("%d\n",&t);
    for(j=0;j<t;j++)
    {
        int n,i;
        getline(cin,s);
        n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(s[i]=='z')
                cout<<"a";
                else
                printf("%c",s[i]+1);
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                if(s[i]=='Z')
                cout<<"A";
                else
                printf("%c",s[i]+1);
            }
        }
        printf("\n");
    }
    return 0;
}
