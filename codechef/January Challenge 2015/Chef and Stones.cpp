#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    ll n,k,i,max1,x;
		cin>>n>>k;
		ll s[n],p[n];
		for(i=0;i<n;i++)
            cin>>s[i];
		for(i=0;i<n;i++)
            cin>>p[i];
		max1=INT_MIN;
		for(i=0;i<n;i++)
			{
			    x=(k/s[i])*p[i];
				if(x>max1)
				max1=x;
			}
			cout<<max1<<endl;
			}
				return 0;
				}
