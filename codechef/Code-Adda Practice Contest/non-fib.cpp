#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> fibs ;
vector<ll> gaps ;
vector<ll> ans ;
int nthnonfib(ll n)
{
    fibs.push_back(2);
    fibs.push_back(3);
    fibs.push_back(5);
    for (ll x = 3; x < n; ++x)
        fibs.push_back(fibs[x - 1] + fibs[x - 2]);

    gaps.push_back(0);
    gaps.push_back(1);
    gaps.push_back(2);
    for (int x = 3; x <n; ++x)
        gaps.push_back(gaps[x - 1] + gaps[x - 2] + 1);
    partial_sum(gaps.begin(), gaps.end(), gaps.begin());
    ll result,len=gaps.size(),i;
    for (i = 1;i< len;i++) {
        if (gaps[i] >= n) {
            result = fibs[i] + n - gaps[i - 1];
            break;
        }
    }
    return result;
}

int main()
{
    ll t,n,i;
    for(i=1;i<=100000000;i++)
    ans.push_back(nthnonfib(i));
    while(t--)
    {
        cin>>n;
        cout << ans[n-1] <<"\n";
    }
    return 0;
}
