#include<bits/stdc++.h>
using namespace std;
#define ll long long

template <class T>
void print_v(vector<T> &v) 
{ 
    cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; 
}
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
int solve(int l,int r,vector<int>&v,int x,int y,int ans,vector<vector<int>>&dp)
{
    if(l>=r)
        return 0;
    if((v[l]+v[r])%x==0 && abs(v[l]-v[r])%y==0)
    {
        ans++;
        solve(l-1,r-1,v,x,y,ans,dp);
    }
    solve(l+1,r,v,x,y,ans,dp);
    solve(l,r-1,v,x,y,ans,dp);
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>v(n);
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(auto &i:v)
            cin>>i;
        sort(v.begin(),v.end());
        int l=0;
        int ans=0;
        int r=n-1;

        cout<<solve(l,r,v,x,y,ans,dp)<<endl;
    }
}