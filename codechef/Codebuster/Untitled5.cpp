#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int A[MAX];
int partitions(int low,int high)
{
    int p=low,r=high,x=A[r],i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if (A[j]<=x)
        {

            i=i+1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}
int selection_algorithm(int left,int right,int kth)
{
    for(;;)
    {
        int pivotIndex=partitions(left,right);          //Select the Pivot Between Left and Right
        int len=pivotIndex-left+1;

        if(kth==len)
            return A[pivotIndex];

        else if(kth<len)
            right=pivotIndex-1;

        else
        {
            kth=kth-len;
            left=pivotIndex+1;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,k,l,n;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>A[i];
            k=(i+1)/2;
            l=selection_algorithm(1,i,k);
            cout<<l<<endl;
        }
    }
    return 0;
}
