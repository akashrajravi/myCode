/*    bit_hack
        */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        int n,i=0,j,flag=1,cnt=0;
        cin>>a>>b;
        n=a.length();
        int arr[n];
        /*if((a[0]=='#' && b[0]=='#')||(a[n-1]=='#' && b[n-1]=='#'))
        cout<<"No"<<endl;
        else
        {*/
        for(i=0;i<n;i++)
        {
            if(a[i]=='.' && b[i]=='.')
                arr[i]=3;
            else if(a[i]=='.' && b[i]=='#')
                arr[i]=1;
            else if(a[i]=='#' && b[i]=='.')
                arr[i]=2;
            else
                arr[i]=0;
        }
        for(i=0;i<n;i++)
        {
            if(!arr[i])
            {
                cout<<"No"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
        {
            for(i=0;i<n-1;i++)
            {
                if(arr[i]!=arr[i+1] && arr[i+1]==3)
                    arr[i+1]=arr[i];
                if(arr[i]!=arr[i+1] && arr[i]!=3 && arr[i+1]!=3)
                cnt++;
            }
            //if((arr[n-1]==3 && (arr[n-2]==1 || arr[n-2]==2)) || (arr[n-2]==3 && (arr[n-1]==1 || arr[n-1]==2)))
              //  cnt--;
            cout<<"Yes"<<endl;
            cout<<cnt<<endl;
        }
    }
    return 0;
}
