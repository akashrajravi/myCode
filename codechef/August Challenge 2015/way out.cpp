// bit_hack
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
void scanint(int &x)
/*{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc())
        x = (x<<1) + (x<<3) + c - 48;
}*/
typedef pair<int,int>my_pair;
int cmpr(const my_pair & a,const my_pair & b)
{
    return (a.first<b.first);
}

int main()
{
    int t;
    //scanint(t);
    cin>>t;
    while(t--)
    {
        int n,h,l,u,i,x,y,j;
        ll sum=0,min1;

        cin>>n>>h;
        //scanint(n);
        //scanint(h);
        int a[n];
        for(i=0;i<n;i++)
           a[i]=n;

        vector<my_pair>vec;
        map<int,int>mp;
        map<int,int>::iterator it;
        for(i=0;i<n;i++)
        {
            cin>>l>>u;
            //scanint(l);
            //scanint(u);
            vec.push_back(my_pair(l,u));
        }
        sort(vec.begin(),vec.end(),cmpr);
        for(i=0;i<n;)
        {
            l=1;
            x=vec[i].first;
            while(vec[i].first==vec[i+1].first)
            {
                mp[vec[i].second]++;
                l++;
                i++;
            }
            mp[vec[i].second]++;
            i++;
            for(it=mp.begin();it!=mp.end();it++)
            {
                y=it->first-x+1;
                while(y--)
                {
                    a[x++]-=l;
                }
                l-=it->second;
            }
            mp.clear();

            //cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }
        for(i=0;i<h;i++)
        sum+=a[i];
        min1=sum;
        for(i=1;i<=n-h;i++)
        {
            sum=sum-a[i-1]+a[h+i-1];
           min1=min(min1,sum);
        }
        cout<<min1<<endl;
    }
    return 0;
}
