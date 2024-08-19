#include<bits/stdc++.h>
using namespace std;
int solve(int idx,vector<int>&v,vector<int>&dp)
{
    if(idx<0)
        return 0;
    if(idx==0)
        return v[idx];
    if(dp[idx]!=-1)
        return dp[idx];
    int notpick=solve(idx-1,v,dp);
    int pick=0;
    pick=v[idx]+solve(idx-2,v,dp);
    return  dp[idx]=max(pick,notpick);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        vector<int>dp(n,-1);
        cout<<solve(n-1,v,dp)<<endl;
    }
}