#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3,i,x;
    cin>>n1>>n2>>n3;
    map<int,int>mp;
    map<int,int>::iterator it;
    for(i=0;i<(n1+n2+n3);i++)
    {
        cin>>x;
        mp[x]++;
    }
    x=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>1)
        x++;
    }
    cout<<x<<endl;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>1)
        cout<<it->first<<endl;
    }
    /*for(i=0;i<n2;i++)
    {
        cin>>x;
        map[x]++;
    }
    for(i=0;i<n3;i++)
    {
        cin>>x;
        map[x]++;
    }
    /*for(i=0;i<n1 && j<n2;)
    {
        if(a[i]==b[j])
            {
                mp[a[i]]++;
                j++;
                i++;
            }
        else if(a[i]>b[j])
            {
                temp[l]=b[j];
                //cout<<temp[l]<<" ";
                //k=j+1;
                j++;
                l++;
            }
        else
        {
            temp[l]=a[i];
            //cout<<temp[l]<<" ";
            l++;
            i++;
        }
    }
    if(i<n1)
    {
        for(k=i;k<n1;k++)
         {
            temp[l]=a[k];
            l++;
         }
    }
    if(j<n2)
    {
        for(k=j;k<n2;k++)
         {
           temp[l]=b[k];
           l++;
         }
    }
    k=0;
    /*for(i=0;i<l;i++)
        cout<<temp[i]<<" ";
    cout<<endl;
    for(i=0;i<l;i++)
    {
        for(j=k;j<n3;j++)
        {
            if(temp[i]==c[j])
            {
                mp[c[j]]++;
                k=j+1;
                break;
            }
            if(temp[i]<c[j])
                break;
        }
    }*/
    //sort(ans,ans+count);
    return 0;
}
