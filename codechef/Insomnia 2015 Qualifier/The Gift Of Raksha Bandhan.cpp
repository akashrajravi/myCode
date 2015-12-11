#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}
string ip()
{
    string i="";
    int temp=getchar_unlocked();
    while(temp<'a'||temp>'z')
        temp=getchar_unlocked();
    while(temp>='a'&&temp<='z')
    {
        i+=(char)temp;
        temp=getchar_unlocked();
    }
    return i;
}
int main()
{
    string str = ip();

    int q;
    //scanf("%d",&q);
    scanint(q);

    int n = str.length();
    int ar[n],i=0,j,l,k=0,cnt;
    while(i<n-1)
    {
        cnt=0;
        for(j=0,l=i;j<=i-1 && l<n;j++,l++)
        {
            if(str[j]==str[l])
                cnt++;
            else
                break;
        }
        ar[k++]=cnt;
        i++;
    }
    while(q--)
    {
        int p;
        scanint(p);
        //cin>>p;
        cout<<ar[p-1]<<endl;
    }
    return 0;
}
