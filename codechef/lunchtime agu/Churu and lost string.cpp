#include<bits/stdc++.h>
using namespace std;
/*int cmpr(pair<int,int>a,pair<int,int>b)
{
    return a.first<b.first;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k,j,l,r;
        cin>>n>>k;
        char ans[n+1],x;
        for(i=0;i<n;i++)
        ans[i]='.';
        //pair<int,int>pr;
       // vector<pair<int,int> >vec;
        for(i=0;i<k;i++)
        {
            cin>>l>>r;
            ans[l]='(';
            ans[r]=')';
            //vec.push_back(make_pair(l,r));
        }
        //sort(vec.begin(),vec.end(),cmpr);
        /*for(i=0;i<k;i++)
        {
            ans[vec[i].first]='(';
           ans[vec[i].second]=')';
        }*/
        stack<char>st1,st2,st3,st4;
        for(i=n-1;i>=0;i--)
            st1.push(ans[i]);
        /*while(!st1.empty())
        {
            cout<<st1.top();
            st1.pop();
        }*/
        st2.push(st1.top());
        //st3.push(st1.top());
        st1.pop();
        while(!st1.empty())
        {
            if(st2.top()=='(' && st1.top()==')')
            {
                st1.pop();
                st2.pop();
                st3.push('(');
                st3.push(')');
            }
            else if(st2.top()=='(' && st1.top()=='(')
                {
                    st2.push(st1.top());
                st1.pop();
                }
            else if(st2.top()=='(' && st1.top()=='.')
            {
                st1.pop();
                st1.push(')');
            }
             else if(st2.top()=='.' && st1.top()==')')
            {
                st2.pop();
                st2.push('(');
                //st3.push('(');
            }
             else if(st2.top()=='.' && st1.top()=='(')
            {
                st2.push('(');
                st1.pop();
                //st3.push('(');
            }
            else if(st2.top()=='.' && st1.top()=='.')
            {
                st1.pop();
                //st1.push(')');
                st2.pop();
                //st2.push('(');
                st3.push('(');
                st3.push(')');
            }
            else if(st2.top()==')' && st1.top()=='(')
            {
                //st4.push(st2.top());
                x=st2.top();
                st2.pop();
                while(st2.top()!='(' && !st2.empty())
                {
                    st4.push(st2.top());
                    st2.pop();
                }
                st3.push(st2.top());
                st2.pop();
                while(!st4.empty())
                {
                    st2.push(st4.top());
                    st4.pop();
                }
                st2.push(st1.top());
                st1.pop();
            }
            if(st2.empty() && !st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            //cout<<st3.top();
        }
        j=n-1;
        while(!st3.empty())
        {
            ans[j]=st3.top();
            st3.pop();
            j--;
        }
        /*i=0;
        j=n-1;
        while(i<j)
        {
            while(ans[i]!='.' && i<n)
            i++;
            while(ans[j]!='.' && j>=0)
            j--;
            if(i>=j)
            break;
            ans[i]='(';
            ans[j]=')';
        }*/
        for(i=0;i<n;i++)
        cout<<ans[i];
        cout<<endl;
    }
    return 0;
}
