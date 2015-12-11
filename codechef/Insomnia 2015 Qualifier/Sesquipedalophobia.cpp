#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,l,mx,ar[26],sum=0,ind;
    string a,b;
    cin>>n>>k>>a;
    for(i=0;i<k;i++)
    {
        memset(ar,0,sizeof(ar));
        for(j=i;j<n;)
        {
            ar[a[j]-'a']++;
            j=j+k;

        }
        mx=ar[0];
        ind=0;
        for(l=1;l<26;l++)
        {
            if(mx<ar[l])
            {
                mx=ar[l];
                ind=l;
            }
        }
        printf("%c",'a'+ind);
    }
    cout<<endl;
    return 0;
}
