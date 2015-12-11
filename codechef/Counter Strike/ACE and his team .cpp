#include<bits/stdc++.h>
using namespace std;
int a[2000000];
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,ans=0,i,cnt,j;
		cin>>n;
		int h=0,x;
		memset (a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			cin>>x;;
			h=max(h,x);
			a[x]++;
		}
		for (i=h;i>1;i--)
		{
		    cnt=0;
			for (j=i;j<=h;j=j+i)
				{
                    cnt+=a[j];
				}
			if (cnt>1)
			{
				ans = i;
				break;
			}
		}
		if (ans)
			cout<<ans<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}
