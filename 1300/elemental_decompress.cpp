#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<bool>v1(n+1,false);
        vector<int>v(n),x(n+1,0),pair(n+1),p(n),q(n);
        priority_queue<long long>left_out;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x[v[i]]++;
            if(x[v[i]]>2)
                flag=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(x[i]==0)
                left_out.push(i);
        }
        for(int i=n;i>=1;i--)
        {
            if(x[i]==1)
                pair[i]=i;
            else if(x[i]==2)
            {
                if(left_out.top()<i)
                {
                    pair[i]=left_out.top();
                    pair[left_out.top()]=i;
                    left_out.pop();
                }
                else
                {
                    flag=1;
                    break;
                }   
            }     
        }
        for(int i=0;i<n;i++)
        {
            if(v1[v[i]]==false)
            {
                p[i]=v[i];
                q[i]=pair[v[i]];
                v1[v[i]]=true;
            }
            else
            {
                p[i]=pair[v[i]];
                q[i]=v[i];
            }

        }
        if(flag)
            cout<<"NO\n";
        else
        {
            
            cout<<"YES\n";
            for(auto ele:p)
                cout<<ele<<" ";
            cout<<"\n";
            for(auto ele:q)
                cout<<ele<<" ";
            cout<<"\n";
        }
        
    }
}
