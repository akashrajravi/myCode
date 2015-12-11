#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,b[101]={0};
		cin>>n;
		int a[n],c=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		for(i=0;i<101;i++)
		{
			if(b[i]!=0 && b[i]<=n)
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
