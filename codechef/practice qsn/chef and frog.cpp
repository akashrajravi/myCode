#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>my_pair;
int cmpr(const my_pair & a,const my_pair & b)
{
    return (a.first<b.first);
}
int main()
{
     int n,i,k,p,j;
        cin>>n>>k>>p;
        int a[n],v[n];
        vector<my_pair>vec;
        //vector<int> v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            vec.push_back(my_pair(a[i],i));
        }
        sort(vec.begin(),vec.end(),cmpr);
        /*vec[0].second=0;*/
        for(i=0;i<n;i++)
        {
            j=i;
            v[vec[i].second]=i;
            while((vec[j+1].first-vec[j].first)<=k && j<n-1)
            {
                v[vec[j+1].second]=i;
                j++;
                //vec[i].second=0;
            }
            i=j;
        }
        //for(i=0;i<vec.size();i++)
        //cout<<vec[i].first<<" "<<vec[i].second<<endl;
        while(p--)
        {
            int x,y;
            cin>>x>>y;
            if(v[x-1]!=v[y-1])
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
    return 0;
}
