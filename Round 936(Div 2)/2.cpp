#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1000000007;
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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(auto &i:v)
            cin>>i;
        vector<ll>pre;
        pre.push_back(v[0]%MOD);
        ll maxim=v[0]%MOD;
        ll maxi=v[0]%MOD;
        for(int i=1;i<n;i++)
        {
            ll p=v[i]+pre[i-1];
            pre.push_back(p%MOD);
            maxim=max(v[i],maxim+v[i]);
            maxi=max(maxi,maxim);
        }
        // for(auto ele:pre)
        // {
        //     cout<<ele<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            if(maxi<v[i])
            {
                maxi=v[i]%MOD;
            }
        }
        //cout<<"MAXI"<<maxi<<endl;
        ll sum=(pre[pre.size()-1])%MOD;
        if(maxi<=0)
        {
            sum=(sum%MOD+MOD)%MOD;
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                sum=(sum%MOD+maxi%MOD)%MOD;
                maxi=((maxi%MOD)*2);
            }
        }
        if(sum<=0)
        {
            sum=(sum+MOD)%MOD;
        }
        cout<<sum%MOD<<endl;

    }
}