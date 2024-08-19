#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<pair<int,int>>v,ans;
        
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(make_pair(x,i));
        }
        sort(v.begin(),v.end());
        int k=n;
        for(int i=0; i<n; i++)
        {
            ans.push_back(make_pair(v[i].second,k));
            k-=1;
        }
        sort(ans.begin(),ans.end());
        for(auto ele:ans)
        cout<<ele.second<<" ";
        cout<<"\n";

    }
}