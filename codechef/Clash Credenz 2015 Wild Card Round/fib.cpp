#include<bits/stdc++.h>
#define long long long
using namespace std;

map<long, long> F;

long f(long n) {
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1));
	} else { // n=2*k+1
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k));
	}
}

int main()
{
    long n, temp, i, product, fib[100010];

	F[0]=F[1]=1;
    long q, l, r;
    cin>>q;

    fib[0] = 1;
    fib[1] = 1;
    for(i=2;i<=100005;i++)
    {
        if(f(i-1) & 1)
            fib[i] = f(i-1)%4;
        else
            fib[i] = 1;
    }
    for(i=1;i<=50;i++)
       // cout<<fib[i]<<" ";
    //cout<<endl;
    for(i=1;i<=50;i++)
        {
            fib[i] = (fib[i]*fib[i-1]);
           // cout<<fib[i]<<" ";
        }


    while(q--)
    {
        cin>>l>>r;
        cout<<(fib[r]/fib[l-1])%4<<endl;

    }
    return 0;
}
