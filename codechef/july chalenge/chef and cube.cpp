#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a[7];
        int i;
        for(i=0;i<6;i++)
        cin>>a[i];
        for(i=0;i<6;i++)
        {
           if(i==0)
           {
               if(a[0]==a[2])
               {
                   if(a[0]==a[4] || a[0]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
               if(a[0]==a[3])
               {
                   if(a[0]==a[4] || a[0]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
           }
           else if(i==1)
           {
               if(a[i]==a[2])
               {
                   if(a[i]==a[4] || a[i]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
               if(a[i]==a[3])
               {
                   if(a[i]==a[4] || a[i]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
           }
           else if(i==2)
           {
               if(a[i]==a[0])
               {
                   if(a[i]==a[4] || a[i]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
               if(a[i]==a[1])
               {
                   if(a[i]==a[4] || a[i]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
           }
           else if(i==3)
           {
               if(a[i]==a[0])
               {
                   if(a[i]==a[4] || a[i]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
               if(a[i]==a[1])
               {
                   if(a[i]==a[4] || a[i]==a[5])
                   {
                       i=1;
                       break;
                   }
               }
           }
           else if(i==4)
           {
               if(a[i]==a[0])
               {
                   if(a[i]==a[2] || a[i]==a[3])
                   {
                       i=1;
                       break;
                   }
               }
               if(a[i]==a[1])
               {
                   if(a[i]==a[2] || a[i]==a[3])
                   {
                       i=1;
                       break;
                   }
               }
           }
           else if(i==5)
           {
               if(a[i]==a[0])
               {
                   if(a[i]==a[2] || a[i]==a[3])
                   {
                       i=1;
                       break;
                   }
               }
               if(a[i]==a[1])
               {
                   if(a[i]==a[2] || a[i]==a[3])
                   {
                       i=1;
                       break;
                   }
               }
           }
        }
        if(i==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
