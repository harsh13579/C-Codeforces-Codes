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
int solve(int i,vector<int>&v,ll h,int green,int blue)
{
    if(i==v.size())
        return 0;
    if(h>v[i])
    {
        return solve(i+1,v,h+(v[i]/2),green,blue)+1;
    }
    int take_green=0,take_blue=0;
    if(green)
        take_green=solve(i,v,h*2,green-1,blue);
    if(blue)
        take_blue=solve(i,v,h*3,green,blue-1);
    
    return max(take_green,take_blue);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        vector<int>v(n);
        for(auto &i:v)
            cin>>i;
        int i=0,flag=0;
        int green=2,blue=1;
        sort(v.begin(),v.end());
        cout<<solve(0,v,h,green,blue)<<endl;
    }
}