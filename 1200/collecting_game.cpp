#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0,change=0;
        vector<ll>inp(n);
        vector<pair<ll,ll>>sorted_inp,ans;
        for(int i=0;i<n;i++)
        {
            cin>>inp[i];
            sorted_inp.push_back(make_pair(inp[i],i));
            sum+=inp[i];
        }
        int j=0;
        sort(sorted_inp.begin(),sorted_inp.end());
        for(int i=0;i<n;i++)
        {
            sum-=sorted_inp[n-i-1].first;
            if(change==1)
            {
                ans.push_back(make_pair(sorted_inp[n-i-1].second,j));
            }
            else
            {
                ans.push_back(make_pair(sorted_inp[n-i-1].second,n-i-1));
                j=n-i-1;
            }
            if(sum>=sorted_inp[n-i-1].first)
                change=1;
            else
                change=0;
            
        }  
        // for(int i=0;i<n;i++)
        // {
        //     cout<<max_presum[i]<<" ";
        // }     
        // cout<<endl;
        
        sort(ans.begin(),ans.end());
        for(auto i:ans)
            cout<<i.second<<" ";
        cout<<"\n";
    }
}