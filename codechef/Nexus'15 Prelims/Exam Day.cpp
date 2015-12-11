#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char str[100001];
        int k;
        gets(str);
        cin>>k;
        cout<<str<<endl;
        int n,i;
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
                printf("%c",(((int)(str[i]-'a')-k)%26+97));
            else if(str[i]>='A' && str[i]<='Z')
                printf("%c",(((int)(str[i]-'A')-k)%26+65));
            else
            cout<<str[i];
            //printf("%c",str[i]);
        }
        cout<<endl;
    }
    return 0;
}
