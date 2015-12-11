#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[100001];
        scanf("%s",a);
        map<char,int> mp;
        map<char,int>::iterator it;
        int i=0;
        while(a[i]!='\0')
        {
            mp[a[i]]++;
            i++;
        }
        if(mp.size()&1)
        cout<<"Counter Terrorist"<<endl;
        else
        cout<<"Terrorist"<<endl;
    }
    return 0;
}
