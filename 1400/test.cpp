#include<bits/stdc++.h>
using namespace std;
long long maxim(long long idx,long long k,vector<long long>&dp,vector<long long>&heights)
{
  if(idx==0)
    return 0;
  if(dp[idx]!=-1)
    return dp[idx];
  long long mini=INT_MAX;
  for(long long i=1;i<=k;i++)
  {
    if(idx>=i)
    {
      long long sum=abs(heights[idx]-heights[idx-i])+maxim(idx-i,k,dp,heights);
      mini=min(mini,sum);
    }
  }
  return dp[idx]=mini;
}

int main()
{
  long long n,k;
  cin>>n>>k;
  vector<long long>heights(n);
  for(auto &i:heights)
    cin>>i;
  vector<long long>dp(n,-1);
  long long ans=maxim(n-1,k,dp,heights);
//   for(auto ele:dp)
//     cout<<ele<<" ";
// cout<<endl;
  cout<<ans<<endl;
}