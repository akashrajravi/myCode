#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0;
    cin>>n;
    int a[n],b[n],check=0,k=0,p,found=0,tr=1,l,len;
    for(i=0;i<n;i++)
    cin>>a[i];
    p=n;
    for(i=0;i<p-1 && tr;i++)
    {
        found=0;
        len=p;
        cout<<endl;
        if(!check)
        {
            l=0;
            for(j=0;j<len-1;)
            {
                if(a[j]<a[j+1])
                {
                    b[l]=a[j];
                    cout<<b[l]<<" ";
                    l++;
                    while(a[j]<a[j+1] && j<len-1)
                        j++;
                    //j++;
                    found=1;
                }
                else
                    {
                         //b[l]=a[j];
                    //cout<<b[l]<<" ";
                        //l++;
                        j++;
                    }
                if(a[j-1]>= a[j] && j==len-1)
                {
                    b[l]=a[j];
                    //cout<<b[l]<<" ";
                    l++;
                    j++;
                }
            }
            p=l;
            check=1;
            if(!found)
                {
                    tr=0;
                    break;
                }
            else
                cnt++;
        }
        else
        {
            cout<<endl;
            l=0;
            for(j=0;j<len-1;)
            {
                if(b[j]<b[j+1])
                {
                    a[l]=b[j];
                    cout<<a[l]<<" ";
                    l++;
                    while(b[j]<b[j+1] && j<len-1)
                        j++;
                    //j++;
                    found=1;
                }
                else
                    {
                         //b[l]=a[j];
                    //cout<<b[l]<<" ";
                        //l++;
                        j++;
                    }
                if(a[j-1]>= a[j] && j==len-1)
                {
                    a[l]=b[j];
                    //cout<<b[l]<<" ";
                    l++;
                    j++;
                }
            }
            p=l;
            check=0;
            if(!found)
                {
                    tr=0;
                    break;
                }
            else
                cnt++;
        }
        if(!tr)
            break;
    }
    cout<<cnt;
    return 0;
}
