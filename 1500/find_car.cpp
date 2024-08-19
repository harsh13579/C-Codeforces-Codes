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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<ll>a(k+1),b(k+1);
        for(int i=1;i<=k;i++)
            cin>>a[i];
        for(int i=1;i<=k;i++)
            cin>>b[i];
        ll x;
        for(int i=0;i<q;i++)
        {
            cin>>x;
            int low1 = std::lower_bound(a.begin(),a.end(),x)-a.begin(); 
            if(a[low1]==x)
            {
                cout<<b[low1]<<" ";
                continue;
            }
            ll ans=b[low1-1]+(x-a[low1-1])*(b[low1]-b[low1-1])/(a[low1]-a[low1-1]);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}