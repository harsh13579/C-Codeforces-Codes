#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b) 
{
    if (a.first == b.first) 
        return (a.second > b.second);
    else 
        return (a.first < b.first);
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0;
        cin>>n;
        long long sum=0;
        vector<pair<int,int>>v(n);
        map<int,int>m;
        for(auto &i:v)
        {
            cin>>i.first>>i.second;
        }
        sort(v.begin(),v.end(),comp);
        for(int i = 0; i < n; i++)
        {
            if(v[i].first>x)
            {
                if(m.find(x)!=m.end())
                {
                    int k=x;
                    x-=m[x];
                    m.erase(k);
                }
                sum+=v[i].second;
                x++;
                m[v[i].first]++;
            }
        }
        cout<<sum<<endl;
    }
}  