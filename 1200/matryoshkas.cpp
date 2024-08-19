#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<ll> v(n);
        vector<pair<ll,ll>>p;
        for(auto &i:v)
            cin>>i;
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=0;i<n;)
        {
            int j=i;
            while(i<n && v[i]==v[j])
                i++;
            p.push_back(make_pair(v[j],i-j));
        }
        ans+=p[0].second;
        for(int i=1;i<p.size();i++)
        {
            if(p[i].first+1!=p[i-1].first)
            {
                ans+=p[i].second;
            }
            else
            {
                ans+=max(p[i].second-p[i-1].second,(ll)0);
            }
        }
        cout<<ans<<endl;
    }
}